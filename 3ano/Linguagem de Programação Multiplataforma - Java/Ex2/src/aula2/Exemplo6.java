package aula2;

public class Exemplo6 {
        public static void main(String args[]){
            int valor;
            for(valor = 1; valor<=10; valor++){
                System.out.println("Valor:" + valor);
            }
            
            int soma = 0;
            do{
            soma++;
                System.out.println("Soma = " + soma);
            }while(soma <=10);
        }
}
