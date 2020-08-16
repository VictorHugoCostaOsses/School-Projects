package arraylist;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Scanner;


public class ArrayListExemplo {

  
    public static void main(String[] args) {
     int i;
     Scanner entrada = new Scanner(System.in);
     ArrayList<String> agenda = new ArrayList();
     agenda.add("3Fernando: 1111");
     agenda.add("4Priscila Keli: 2222");
     agenda.add("1Eduardo: 3333");
     agenda.add("2Bruno: 2444");
     
        System.out.printf("\nOrdenando .....");
        Collections.sort(agenda);
        
        System.out.println("Exibindo o ArrayList\n");
        for(i=0; i < agenda.size(); i++){
            System.out.printf("Posição %d-%s\n", i, agenda.get(i)); //get(i) - Retorna o i-ésimo elemento da lista.
        }
        System.out.println("Qual a posição a ser excluida:");
        i = entrada.nextInt();
        try{
        }catch(Exception e){
            System.out.printf("\nErro: posição inválida (%s).", e.getMessage());
        }
        System.out.printf("\nExibindo o ArrayList (usando iterator)\n");
        
        i = 0;
        Iterator<String> iterator = agenda.iterator();
            while(iterator.hasNext()){
                System.out.printf("Posião %d- %s\n", i,iterator.next());
                i++;
            }
        
    }
    
}
