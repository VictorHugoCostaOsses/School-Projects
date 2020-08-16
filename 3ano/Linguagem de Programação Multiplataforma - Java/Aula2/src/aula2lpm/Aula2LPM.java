/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula2lpm;

/**
 *
 * @author aluno
 */
public class Aula2LPM {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int x = 0, y =0;
        y = x++;// Primeiro ele atribuir y = x e depois faz o x++ só em x.
        System.out.println("Com x++ y= " +y);
        System.out.println("x= " + x);
        y = 0;
        x = 0;
        y= ++x;// Primeiro ele incrementa em x e depois atribui
        System.out.println("Com ++x y= " +y);
        System.out.printf("x= " + x);

    }
    
}
