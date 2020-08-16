package javaapplication12;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class pesquisar {
    public static boolean pesquisarNome(String arquivo,String nome) throws FileNotFoundException, IOException{
    boolean encontrou = false;
    boolean retorno = false;
    
    String comparar[] = new String[2];
    int count = 1;
    String conteudo = "";
    File file = new File(arquivo);
    

        if(!file.exists()) return retorno;
        
        BufferedReader br = new BufferedReader(new FileReader(arquivo));
        String linha = "";
     
        while((linha = br.readLine()) != null){
            comparar = linha.split(";");
            
            if(comparar[0].equals(nome)) encontrou = true;
            else encontrou = false;
            
            if(encontrou){
            conteudo +=  "\nRegistro Encontrado: "  + "\nNome: " + comparar[0] + "\nTelefone: " + comparar[1] + "\n";
            count++;
            encontrou = false;
            } 
        }
        
        if("".equals(conteudo)){
            System.out.println("Registro não encontrado! Aperte qualquer ENTER para continuar...");
            System.in.read();
            return retorno;
        }
        else{ 
            System.out.println(conteudo);
            System.out.println("Registro(os) encontrado(s)! Aperte qualquer tecla para continuar...");
            System.in.read();
            retorno = true;}
        
      return retorno;
    }
}
