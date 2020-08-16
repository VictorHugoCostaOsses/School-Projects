package aula2;


public class Exemplo01 {
  
    public static void main (String args[]){
    int valor = (int)(Math.random()*2); //random: retorna um número de zero a 1, e multiplica por 5
    if(valor > 0)
    System.out.println("Valor maior que zero = " + valor);
    else
    System.out.println("Valor menor ou igual a zero = " + valor);
    
}
}