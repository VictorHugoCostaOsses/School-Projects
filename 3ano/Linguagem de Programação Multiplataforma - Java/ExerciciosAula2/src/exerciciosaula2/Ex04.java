package exerciciosaula2;

public class Ex04 {

    public static void main(String args[]) {

        if (args.length == 2) {
            int v1 = Integer.parseInt(args[0]);
            int v2 = Integer.parseInt(args[1]);
            int maior = 0;
            int menor = 0;

            if (v1 > v2) {
                maior = v1;
                menor = v2;
            } else if (v2 > v1) {
                maior = v2;
                menor = v1;
            } else if (v2 == v1) {
                boolean testePrimo = true;
                if (v2 != 2) {
                    for (int x = 2; x < v2; x++) {
                        if (v2 % x == 0) {
                            testePrimo = false;
                            break;
                        }
                    }
                    if (testePrimo) {
                        System.out.println("O número " + v2 + " é primo.");
                    }
                    else{
                        System.out.println("O número " + v2 + " não é primo.");
                    }
                } else{
                    System.out.println("O número 2 é primo.");
                }
                System.exit(0);
            }
            //variaveis
            int aux = menor;
            boolean ePrimo;
            while (aux <= maior) { //vai na sequencia do num menor ate o maior               
                ePrimo = true;

                for (int i = 2; i < aux; i++) {
                    if (aux % i == 0) { //verifica se NÃO é primo                            
                        ePrimo = false;
                        break;
                    }
                }
                if (ePrimo) {
                    System.out.println("O número " + aux + " é primo.");
                }
                aux++;
            }
        }
    }
}
