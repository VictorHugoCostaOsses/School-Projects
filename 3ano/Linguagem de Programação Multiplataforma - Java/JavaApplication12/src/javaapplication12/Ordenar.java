package javaapplication12;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import static javaapplication12.telefone_nome.adicionarTelefoneNome;
import static jdk.nashorn.internal.objects.NativeString.charAt;

public class Ordenar {
    public static void orderNomesTelefones(String arquivo) throws FileNotFoundException, IOException{
    File file = new File(arquivo);
    int count = 0;
    String conteudo = ""; 
    ArrayList<String> ordenarConteudo = new ArrayList();
    String recebe;
    char letra;
    char letraAntiga = 0;
        if(file.exists()){
            String linha;
 
            BufferedReader br = new BufferedReader(new FileReader(arquivo));
            while((linha = br.readLine())!= null){
                ordenarConteudo.add(count,linha);
                count++;
            }
            int tamanho = count;
            
            Collections.sort(ordenarConteudo);
            Iterator<String> iterator = ordenarConteudo.iterator();
               while(iterator.hasNext()){
               recebe = iterator.next();
                /*letra = recebe.charAt(0);

                if(letraAntiga == 0){
                    conteudo = "Letra - a\n";
                    letraAntiga = letra;
                }*/
                /*else if(letraAntiga != letra){ */
                 //conteudo += "\nLetra - " + letra + "\n\n" + recebe + "\n";*/
                /* letraAntiga = letra;}*/
               conteudo += recebe + "\n";
            }
            adicionarTelefoneNome(arquivo, conteudo, false);
        }
    }
}
