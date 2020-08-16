package javaapplication12;

import java.util.Scanner;

public class informacoes {
    public static String informacoes(){
        String couteudo;
        Scanner entrada = new Scanner(System.in);
        System.out.println("Informe o nome a ser cadastrado");
        couteudo = entrada.nextLine();
        System.out.println("Informe um número de telefone a ser cadastrado");
        couteudo += ";" + entrada.nextLine() + "\n";
        return couteudo;
    }
}
