package aula.pkg4.pkg1;

import java.util.Scanner;//Classe para entrada de dados do teclado

public class Aula41 {
//Os objetos são guardado em espaços/memorias distintas
    
    public static void main(String[] args) {
       Scanner t = new Scanner(System.in);//Receber dados do teclado
       produtos arroz = new produtos(); //Acessar a classe feita, já que ela é public
       produtos feijao = new produtos();
       //feijao.preco = 4.99;//Não é possivel acessar, pois é private
             System.out.println("Digite um preço para o arroz");
                 double p = t.nextDouble();//Setando um valor double dentro do objeto "t"
                 arroz.codigo = 1;//É possivel atribuir, pois é friendly
                 arroz.seta_preco(p);
             System.out.println("Digite um preço para o feijão");
                 p = t.nextDouble();//Receber preço de feijao
                feijao.codigo = 2;
                feijao.seta_preco(p);
        System.out.println("O codigo do arroz é " + arroz.codigo + " e o preço é = " + arroz.retorna_preco());
        System.out.println("O codigo do feijão é " + feijao.codigo + " e o preço é = " + feijao.retorna_preco());
       //System.out.println("O preço do arroz é = " + arroz.retorna_preco());
       //System.out.println("O preço do feijão é = " + feijao.retorna_preco());
       
    }
    
}
