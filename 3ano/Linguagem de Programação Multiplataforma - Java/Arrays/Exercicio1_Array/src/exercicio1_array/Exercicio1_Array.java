package exercicio1_array;

import java.util.Scanner;

public class Exercicio1_Array {

    public static void main(String[] args) {
       int[] vetor = new int[100];
       Scanner entrada = new Scanner(System.in);
       int posicao = 0,valor = 0;
       
        System.out.println("Informe um valor inteiro. Caso queira parar digite -1\n");
        while(valor != -1){
        valor = entrada.nextInt();
        vetor[posicao] = valor;
        posicao++;
        }
        System.out.println("\n");
         OrdenacaoVetor ordem = new OrdenacaoVetor(posicao);
         ordem.inserirValores(vetor);
         ordem.ordemCrescente();
    }
    
}
