package atividadearquivo_osses;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class pesquisar {
    public static boolean pesquisar(String arquivo, String pesquisa)throws FileNotFoundException,IOException{
    File file = new File(arquivo);
    boolean retorno = false;
    
        if(!file.exists()){
            System.out.println("Arquivo não existe");
             return retorno;
        }
        BufferedReader br = new BufferedReader(new FileReader(arquivo));
        String saida = "";
        String linha = "";
        
        while((linha = br.readLine()) != null ){
        System.out.println(linha);
            if(linha.equals(pesquisa)){
                retorno = true;
                break;
            }
        }
        br.close();
        return retorno;
    }
}