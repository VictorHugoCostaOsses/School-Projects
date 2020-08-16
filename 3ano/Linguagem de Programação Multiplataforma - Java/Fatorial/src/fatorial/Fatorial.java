package fatorial;


public class Fatorial {
    public static void main(String[] args) {
        int num = Integer.parseInt(args[0]);
        int i;
        int aux = num;
        
        for(i = num-1; i >0; i--){
           aux = aux * i;
        }
        System.out.println(aux);
       
        
        
        
    }
    
}
