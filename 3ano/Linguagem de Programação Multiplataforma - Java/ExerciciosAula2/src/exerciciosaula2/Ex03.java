/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exerciciosaula2;

/**
 *
 * @author aluno
 */
public class Ex03 {
    public static void main (String args[]) {               
        try {
            int fat = Integer.parseInt(args[0]);
            int aux = fat;
            for (int i = fat-1; i>0; i--) {
                aux = aux*i;
            }
        
            System.out.println("O fatorial de " + fat + " é " + aux);
        } catch (NumberFormatException e) {
            System.out.println("Digite um número!");
        }
        
    }
}
