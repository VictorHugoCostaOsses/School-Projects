package aula2;

public class Exemplo4 {
    public static void main (String args[]){
        int num1, num2;
        try{
            num1 = Integer.parseInt(args[0]);
            num2 = Integer.parseInt(args[1]);
            System.out.println("Soma =" + (num1 + num2));
             System.out.println("Subtracao =" + (num1 - num2));
              System.out.println("Multiplicacao =" + (num1 * num2));
               System.out.println("Divisao =" + (num1 / num2));
        }
        catch (ArithmeticException e){
            System.out.println("Erro de divisao por zero!");
            System.err.println(e); //Mensagem padrao
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Numero de argumentos invalidos!");
        }
        catch (NumberFormatException e){
            System.out.println("Digite apenas numeros inteiros");
        }
        finally{
            System.out.println("Catchau");
        }
    }
}
