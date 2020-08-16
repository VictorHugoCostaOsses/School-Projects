package javaapplication12;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import static javaapplication12.Ordenar.orderNomesTelefones;
import static javaapplication12.telefone_nome.adicionarTelefoneNome;


public class Atualizar{
    public static boolean AtualizarRegistro(String arquivo,String nome, String telefone,String newNome,String newTelefone) throws FileNotFoundException, IOException{
    boolean retorno = false;
    File file = new File(arquivo);
    
    String comparar[] = new String[2];
    String linha = "";
    String conteudo = "";
    if(!file.exists()) return retorno;

    BufferedReader br = new BufferedReader(new FileReader(arquivo));
    
    while((linha = br.readLine()) != null){
        comparar = linha.split(";");  
            if(comparar[0].equals(nome) && comparar[1].equals(telefone)){
            conteudo +=  newNome + ";" + newTelefone  + "\n";
            retorno = true;
            }else{ 
            conteudo +=  comparar[0] + ";" + comparar[1] + "\n";}
    }
    orderNomesTelefones(arquivo);
    adicionarTelefoneNome(arquivo,conteudo,false);
    return  retorno;
    }
}
