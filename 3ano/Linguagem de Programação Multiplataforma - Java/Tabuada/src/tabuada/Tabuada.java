package tabuada;


public class Tabuada {
    public static void main(String[] args) {
        int i;
        int num = Integer.parseInt(args[0]);
        
        System.out.println("Tabuada do:" + num );
        for(i=0; i<10; i++){
           System.out.print(num + " x " + i +  " = ");
           System.out.println(i * num);
           
           
       
       
    }
   }
}