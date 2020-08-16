package javaapplication12;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import static javaapplication12.telefone_nome.adicionarTelefoneNome;

public class excluirRegistro {
    
    public static boolean exclRegistro(String arquivo,String name, String telefone) throws FileNotFoundException, IOException{
        
    File file = new File(arquivo);
    FileWriter file2 = new FileWriter(arquivo,true);
    boolean retorno = false;
    
    String comparar[] = new String[2];
    String conteudo = "";
    String valor = "";
    
        if(!file.exists()) return false;
        BufferedReader br = new BufferedReader(new FileReader(arquivo));
    
        while((valor = br.readLine()) != null){
            comparar = valor.split(";");
             
            if(!comparar[0].equals(name) || !comparar[1].equals(telefone)){
            conteudo +=  valor + "\n";
            }else retorno = true;
        }
        adicionarTelefoneNome( arquivo, conteudo,  false);
  
        
    return retorno;
    }
}
