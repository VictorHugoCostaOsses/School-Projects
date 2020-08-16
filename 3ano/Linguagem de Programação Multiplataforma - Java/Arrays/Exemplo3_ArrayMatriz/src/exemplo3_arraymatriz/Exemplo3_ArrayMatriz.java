package exemplo3_arraymatriz;

import java.util.Scanner;

public class Exemplo3_ArrayMatriz {

    public static void main(String[] args) {
       int[][]m = new int[3][3];
       Scanner entrada = new Scanner(System.in);
       for(int i = 0; i<3; i++){
           for(int j = 0; j<3; j++){
               System.out.println("Digite o valor para (" + i + "," + j + "):");
               m[i][j] = entrada.nextInt();
           }
       }
        System.out.println("Matriz digitada");
            for(int i=0; i<3; i++){

                for(int j=0; j<3; j++){
                    System.out.println(m[i][j] + "");
                }
                System.out.println();
             }
        }
    }

