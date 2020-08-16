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
public class Ex05 {
    public static void main(String[] args) {
        if (args.length == 2) {
            try {
                int num = Integer.parseInt(args[0]);
                int razao = Integer.parseInt(args[1]);                
                 System.out.print(num + " ");
                for (int i = 1; i < 10; i++) {
                    num += razao;
                    System.out.print(num + " ");
                }
            } catch (NumberFormatException e) {
                System.out.println("Digite o tipo certo de valor.");
            }
        } else {
            System.err.println("Digite o número correto de valores.");
        }
    }
}
