package exsobrecargademetodos;

public class ExSobrecargaDeMetodos {
    
    
    public static void main(String[] args) {
        
    RegistroAcademico primeiroRegistro = new RegistroAcademico("Victor", 18152,17,"informática", "3INFD");
    RegistroAcademico segundoRegistro = new RegistroAcademico("Victor");
    RegistroAcademico terceiroRegistro = new RegistroAcademico(18152);
    RegistroAcademico quartoRegistro = new RegistroAcademico();
     
    System.out.println(primeiroRegistro);
    System.out.println(segundoRegistro);
    System.out.println(terceiroRegistro);
    System.out.println(quartoRegistro);
    }
    
}
