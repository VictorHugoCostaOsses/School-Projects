package aula2;

public class triangulo {

   
    public static void main(String[] args) {
        float lado1, lado2, lado3;
        lado1 = 3;
        lado2 = lado1++; //lado2 = 3 e lado1 = 4
        lado3 = 4;
        
        boolean igualdade12, igualdade23;
        igualdade12 = (lado1 == lado2);
        igualdade23 = (lado2 == lado3);
        System.out.println("Lado 1 igual a lado 2?");
        System.out.println(igualdade12);
        System.out.println("Lado 2 igual a lado 3?");
        System.out.println(igualdade23);
        boolean equilatero;
        equilatero = (igualdade12 & igualdade23);
        System.out.println("Triangulo equilátero? " + equilatero);
                
                
       
    }
    
}