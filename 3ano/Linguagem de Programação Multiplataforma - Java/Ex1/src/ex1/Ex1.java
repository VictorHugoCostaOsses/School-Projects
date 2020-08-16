/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex1;

/**
 *
 * @author aluno
 */
public class Ex1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        if(args.length == 2){
        int soma = Integer.parseInt(args[0]) +  Integer.parseInt(args[1]);
        int sub = Integer.parseInt(args[0]) -  Integer.parseInt(args[1]);
        int mult = Integer.parseInt(args[0]) * Integer.parseInt(args[1]);
        double div = Double.parseDouble(args[0]) / Double.parseDouble(args[1]);
        System.out.println("Soma:" + soma);
         System.out.println("Subtração:" + sub);
          System.out.println("Multiplicação:" + mult);
           System.out.println("Divisão:" + div);
        }
        else{
            System.out.println("Numero de argumentos inválidos");   
        }
    }
    
}
