package atividadearquivo_osses;

import static atividadearquivo_osses.pesquisar.pesquisar;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class AtividadeArquivo_Osses {

    
public static void salvar(String arquivo, String conteudo,boolean adicionar)throws IOException{
    FileWriter fw = new FileWriter(arquivo,adicionar);
    fw.write(conteudo);
    fw.close();
}

public static String carregar(String arquivo)throws FileNotFoundException, IOException{

File file = new File(arquivo);
if(!file.exists())return null;
BufferedReader br = new BufferedReader(new FileReader(arquivo));
String saida = "";
String linha = "";

while((linha = br.readLine())!= null){
    saida += linha + "\n";
}
br.close();
return saida;
}
   
    public static void main(String[] args){
        try{
        String texto = "Teste de gravação\nUma linha\nOutra Linha";
        salvar("arquivo.txt",texto,true);
        texto = carregar("arquivo.txt");
        System.out.println(texto);
        }
        catch(Exception e){
         e.printStackTrace();
        }
        
        try{
            if(pesquisar("arquivo.txt","Teste de gravação")){
                System.out.println("\n\nEncontrou!");
            }else{
                System.out.println("\n\nNão encontrou!");
            }
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}
