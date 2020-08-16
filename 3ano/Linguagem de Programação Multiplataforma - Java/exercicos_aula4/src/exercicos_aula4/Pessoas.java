package exercicos_aula4;

public class Pessoas {
    String nome;
    int idade;
    double peso;
    double altura;
    
    void seta_peso(double p){
    peso = p;}

    void seta_altura(double a){
    altura = a;}

    double calcularIMC(double peso, double altura){
    return peso/(altura * altura);}
    
    void mostrarTabela(double imc){
        if(imc < 18.5){
            System.out.println("Você está abaixo do peso ideal");
        }
        else if( imc >= 18.5 && imc < 24.9){
            System.out.println("Parábens, você está em seu pesoa normal");
        }
        else if( imc >= 24.9 && imc < 29.9){
            System.out.println("Você está acima do seu peso(sobrepeso)");
            }
        else if ( imc >= 29.9 && imc < 34.9){
            System.out.println("Obesidade grau I");
        }
         else if ( imc >= 34.9 && imc < 39.9){
            System.out.println("Obesidade grau II");
        }
         else{
            System.out.println("Obesidade grau III");
        }
        
    }
    
   
}
