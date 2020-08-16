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
public class Ex06 {
    public static void main(String[] args) {
        if (args.length == 1) {
            try {
                int max = Integer.parseInt(args[0]);
                if (max > 0 & max < 30) {

                    int ant = 1;
                    int result = 0;
                    for(int x =0; x<=max; x++){
                        result = ant + result;
                        ant = result - ant;
                        System.out.print( result + " ");
                    }
                }
                else{
                System.err.println("Informe um valor que resulte numa sequência menor!");
                }
            } catch (NumberFormatException e) {
                System.err.println("Informe um valor válido!");
            }
        }
    }
}
