package arrayexemplo2_floats;

import java.util.Scanner;

public class ArrayExemplo2_Floats {
    
    public static void main(String[] args) {
      ArrayDeFloats vetor = new ArrayDeFloats(5);
      Scanner entrada = new Scanner(System.in);
      
      for(int i = 0; i < vetor.tamanho(); i++){
          System.out.println("Digite um valor (" + (i+1) + "/" + vetor.tamanho() + "):");
          vetor.modifica(i, entrada.nextFloat());
      }
        System.out.println(vetor);
        System.out.println("Menor Valor:" + vetor.menorValor());
        System.out.println("Maior Valor:" + vetor.maiorValor());
        
    }
    
}
