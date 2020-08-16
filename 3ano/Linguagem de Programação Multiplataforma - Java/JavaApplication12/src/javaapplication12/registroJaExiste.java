package javaapplication12;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class registroJaExiste{
    
    public static boolean registroExistente(String arquivo, String nome, String telefone) throws FileNotFoundException, IOException{
    boolean retorno = false;
    File file = new File(arquivo);
    String comparar[] = new String[2];
    String linha;
    
    BufferedReader br = new BufferedReader(new FileReader(arquivo));

        while((linha = br.readLine()) != null){
            comparar = linha.split(";");
                      
            if(comparar[0].equals(nome) && ((comparar[1])+"\n").equals(telefone)){
            retorno = true;
            break;
            }else{
            retorno = false;
            }
        
        }
    return retorno;
    }
    
}
