package heranca;

import java.util.Date;

public class Heranca {

    public static void main(String[] args) {
      Date data1, data2, data3;
        
      Automovel veiculo1 = new Automovel("3D453I","Celta");
      System.out.println(veiculo1);
      
      Corsa veiculo2 = new Corsa("57F3YH","Corsa","Chevrolet");
      System.out.println(veiculo2);
      
      data1 = new Date(78, 01, 27);
      data2 = new Date(99, 05, 14);
      data3 = new Date(79, 03, 11);
      
      Pessoa pessoa = new Pessoa("Carlos",355,data1);
      System.out.println("\n" + pessoa);
      
      Ator ator = new Ator("Michele",247,data2," Caminho das Indias");
      System.out.println("\n" + ator);
      
      Aluno aluno = new Aluno("Kaio",172,data3,"15432");
      System.out.println("\n" + aluno);
    }
    
}
