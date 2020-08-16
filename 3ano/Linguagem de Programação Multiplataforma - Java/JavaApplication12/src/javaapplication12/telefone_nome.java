package javaapplication12;


import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;


public class telefone_nome {
    public static void adicionarTelefoneNome(String arquivo, String conteudo, boolean append) throws IOException{
    FileWriter file = new FileWriter(arquivo,append);
    file.write(conteudo);
    file.close();
    }
}
