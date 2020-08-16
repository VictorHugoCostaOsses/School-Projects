using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using iTextSharp;//biblioteca ITEXTSHARP E sua extensões
using iTextSharp.text;
using iTextSharp.text.pdf;
using System.IO;

namespace BandoDeDados
{
    public partial class Form6 : Form
    {
        MySqlConnection con = new MySqlConnection("server=143.106.241.3;port=3306;User ID=cl18152;database=cl18152;password=cl*07062002");
        int idPalestra;
        string diaPalestra;
        string horaPalestra;

        public MySqlDataAdapter MySqlDataAdapter { get; private set; }

        public Form6()
        {
            InitializeComponent();
            try
            {
                con.Open();
                MessageBox.Show("Conectado com sucesso!");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            finally
            {
                con.Close();
            }
            this.WindowState = FormWindowState.Maximized;
        }

        private void Form6_Load(object sender, EventArgs e)
        {

            try
            {
                con.Open();
                MySqlCommand busca_palestra = new MySqlCommand("Select nomePalestra from Palestrantes", con);
                MySqlCommand busca_aluno = new MySqlCommand("Select nomeAlunos from Alunos");
                MySqlDataReader resultado1 = busca_palestra.ExecuteReader();

                while (resultado1.Read())
                {
                    comboBox1.Items.Add(resultado1["nomePalestra"].ToString());
                }



            }
            catch (Exception EX)
            {
                MessageBox.Show(EX.ToString());
            }
            finally
            {
                con.Close();
            }

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

            try
            {
                con.Open();
                MySqlCommand busca_palestra = new MySqlCommand("Select nomePalestra, idPalestranta, dia, hora from Palestrantes where nomePalestra ='" + comboBox1.SelectedItem.ToString() + "'", con);
                MySqlDataReader resultado = busca_palestra.ExecuteReader();

                if (resultado.Read())
                {
                    idPalestra = Convert.ToInt32(resultado["idPalestranta"].ToString());
                    diaPalestra = resultado["dia"].ToString();
                    horaPalestra = resultado["hora"].ToString();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            finally
            {
                con.Close();
            }

        }

        private void button2_Click(object sender, EventArgs e)
        {

            if (comboBox1.Text != "" && comboBox2.Text != "")
            {
                try
                {
                    con.Open();
                    MySqlDataAdapter = new MySqlDataAdapter("SELECT al.idAlunos, al.nomeAlunos FROM Alunos al, Presença pr, Palestrantes pa WHERE al.idAlunos=pr.RA AND pr.idPalestra=pa.idPalestranta AND al.turmaAlunos='" + comboBox2.SelectedItem.ToString() + "' AND pa.idPalestranta=" + idPalestra + " order by al.nomeAlunos", con);
                    DataSet DS = new DataSet();//carregas na memória
                    MySqlDataAdapter.Fill(DS);
                    dataGridView1.DataSource = DS.Tables[0];
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.ToString());
                }
                finally
                {
                    con.Close();
                }
            }

            else
            {
                MessageBox.Show("Preencha todos os campos", "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try {
                Document doc = new Document(PageSize.A4);//criando e estipulando o tipo da folha usada
                doc.SetMargins(3, 2, 3, 2);//estipulando o espaçamento das margens que queremos
                PdfWriter writer = PdfWriter.GetInstance(doc, new FileStream(Directory.GetCurrentDirectory() + "\\" + comboBox1.SelectedItem.ToString() + " - " + comboBox2.SelectedItem.ToString() + ".pdf", FileMode.Create));
                doc.Open();

                iTextSharp.text.Font fonte = FontFactory.GetFont("TIMES_ROMAN", 10f, BaseColor.BLACK);

                String dados = "";
                Paragraph paragrafo = new Paragraph(dados, fonte);
                paragrafo.Alignment = Element.ALIGN_CENTER;
                paragrafo.Add(comboBox1.SelectedItem.ToString());
                doc.Add(paragrafo);

                Paragraph paragrafo1 = new Paragraph(dados, fonte);
                paragrafo1.Alignment = Element.ALIGN_CENTER;
                paragrafo1.Add(comboBox2.SelectedItem.ToString());
                doc.Add(paragrafo1);

                Paragraph paragrafo2 = new Paragraph(dados, fonte);
                paragrafo2.Alignment = Element.ALIGN_CENTER;
                paragrafo2.Add(diaPalestra);
                doc.Add(paragrafo2);

                Paragraph paragrafo3 = new Paragraph(dados, fonte);
                paragrafo3.Alignment = Element.ALIGN_CENTER;
                paragrafo3.Add(horaPalestra);
                doc.Add(paragrafo3);

                Paragraph paragrafo4 = new Paragraph(dados, fonte);
                paragrafo4.Alignment = Element.ALIGN_CENTER;
                paragrafo4.Add("\n");
                doc.Add(paragrafo4);

                PdfPTable tabela = new PdfPTable(2);
                float[] anchoDeColumnas = new float[] { 10f, 80f };
                tabela.SetWidths(anchoDeColumnas);

                Paragraph coluna1 = new Paragraph("RA", fonte);
                Paragraph coluna2 = new Paragraph("Nome", fonte);

                var celula1 = new PdfPCell();
                var celula2 = new PdfPCell();

                celula1.AddElement(coluna1);
                celula2.AddElement(coluna2);

                tabela.AddCell(celula1);
                tabela.AddCell(celula2);

                foreach (DataGridViewRow row in this.dataGridView1.Rows) {
                    if (row.Index < dataGridView1.RowCount - 1) {
                        foreach (DataGridViewCell cell in row.Cells) {
                            Phrase dado = new Phrase(cell.Value.ToString());
                            var cel1 = new PdfPCell(dado);
                            tabela.AddCell(cel1);
                        }
                    }
                    else { MessageBox.Show("Arquivo gerado"); }
                }

                doc.Add(tabela);
                doc.Close();

            }
            catch (Exception ex)
            {
                MessageBox.Show("O pdf está aberto, por favor feche para atuálizá-lo","Warning",MessageBoxButtons.OK,MessageBoxIcon.Warning);
                }
            finally
            { }
        }
    
}
    
}
