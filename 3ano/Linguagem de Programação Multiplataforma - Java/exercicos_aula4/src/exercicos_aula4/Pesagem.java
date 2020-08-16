package exercicos_aula4;
//FALTA RECEBER :D
import java.util.Scanner;
import java.text.DecimalFormat;

public class Pesagem {
    DecimalFormat df = new DecimalFormat("##.00");
    
    public static void main(String[] args) {
    Scanner t = new Scanner(System.in);
    Pessoas primeira = new Pessoas();
    Pessoas segunda = new Pessoas();

    primeira.nome = "Victor";
    primeira.idade = 17;
    primeira.peso = 70;
    primeira.altura = 1.82;
    double imc = primeira.calcularIMC(primeira.peso, primeira.altura);
    primeira.mostrarTabela(imc);
    
    System.out.println("Olá " + primeira.nome + " " +
    "sua idade é " + primeira.idade + " " +
    "e seu peso é " + primeira.peso + " " +
    ", além disso, sua altura é " + primeira.altura + " " + 
    ".Pra terminar, seu IMC é " + imc);

    segunda.nome = "Gustavo";
    segunda.idade = 17;
    segunda.peso = 58.5;
    segunda.altura = 1.69;
    imc = segunda.calcularIMC(segunda.peso, segunda.altura);
    segunda.mostrarTabela(imc);
    
    System.out.println("Olá " + segunda.nome + " " +
    "sua idade é " + segunda.idade + " " +
    "e seu peso é " + segunda.peso + " " +
    ", além disso, sua altura é " + segunda.altura + " " + 
    ".Pra terminar, seu IMC é " + imc);
    

    }
    
}
