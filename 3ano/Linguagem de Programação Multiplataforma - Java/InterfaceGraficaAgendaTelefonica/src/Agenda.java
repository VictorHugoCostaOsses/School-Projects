
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Agenda {
    public static void adicionarTelefoneNome(String arquivo, String conteudo, boolean append) throws IOException{
    FileWriter file = new FileWriter(arquivo,append);
    file.write(conteudo);
    file.close();
    }
    
    public static String carregar(String arquivo) throws FileNotFoundException, IOException{
    File file = new File(arquivo);
    if(!file.exists()) return null; 
    
    String saida = "";
    String linha = "";
    
    BufferedReader br = new BufferedReader(new FileReader(arquivo));
    
        while((linha = br.readLine())!= null){
            saida += linha + "\n"; 
        }
    br.close();
    return saida;
    }
    
    public static String pesquisarNome(String arquivo,String nome) throws FileNotFoundException, IOException{
    String retorno = "";
    
    File file = new File(arquivo);
    
        if(!file.exists()){ 
        System.out.println("Arquivo não encontrado!");
        return null;}

        String linha = "";
        String conteudo = "";
        
        BufferedReader br = new BufferedReader(new FileReader(arquivo));
    
        while((linha = br.readLine()) != null){
            if(linha.equals(nome)){
            retorno = br.readLine();
            break;}
        }
        
      br.close();
      return retorno;
    }

}
