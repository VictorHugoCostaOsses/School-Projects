package javaapplication12;

import java.io.IOException;
import java.util.Scanner;
import static javaapplication12.Atualizar.AtualizarRegistro;
import static javaapplication12.Ordenar.orderNomesTelefones;
import static javaapplication12.excluirRegistro.exclRegistro;
import static javaapplication12.informacoes.informacoes;
import static javaapplication12.pesquisar.pesquisarNome;
import static javaapplication12.registroJaExiste.registroExistente;
import static javaapplication12.telefone_nome.adicionarTelefoneNome;

//Victor Hugo Costa Osses 18152
public class AtividadeOsses_AgendaTelefonica {

    public static void main(String[] args) throws IOException {
        int opcao;
        boolean teste;
        String[] comparar = new String[2];
        boolean registroExiste;
        boolean excluir;
        boolean retornoPesquisa;

        String arquivo = "arquivo.txt";
        Scanner receber;
        String name;
        String telefone;
        
        while(true){
                System.out.println("\n0. Sair do sistema.");
                System.out.println("1. Cadastrar pessoa na agenda telefônica.");
                System.out.println("2. Procurar pessoa na agenda telefônica.");
                System.out.println("3. Atualizar registro");
                System.out.println("4. Excluir registro");
                Scanner escolha = new Scanner(System.in);
                opcao = escolha.nextInt();
                if(opcao == 0) break;
                
                switch(opcao){
                case 1:
                    String informacao = informacoes();
                    comparar = informacao.split(";");
                
                    registroExiste = registroExistente(arquivo, comparar[0], comparar[1]); 
    
                    if(!registroExiste){
                        try{
                            adicionarTelefoneNome(arquivo, informacao, true);
                            orderNomesTelefones(arquivo);
                        }
                        catch(Exception e){
                            e.printStackTrace();
                        }
                    }else{
                    System.out.println("Já existe um registro igual em nossa lista telefônica! Aperte ENTER para continuar...");
                    System.in.read();
                    }
                break;
                case 2:
                    System.out.println("Informe o nome da pessoa que deseja encontrar.");
                    Scanner info = new Scanner(System.in);
                    String nome = info.nextLine();
                    
                    try{
                        pesquisarNome(arquivo,nome);}
                    catch(Exception e){
                        System.out.println(e);
                    }
                    
                break;
                case 3:
                    System.out.println("Informe o nome da pessoa");
                    receber = new Scanner(System.in);
                    name = receber.nextLine();
                    
                    System.out.println("Informe o número de telefone da pessoa");
                    receber = new Scanner(System.in);
                    telefone = receber.nextLine();

                    retornoPesquisa = pesquisarNome(arquivo,name);
                    if(retornoPesquisa){                   
                        System.out.println("Informe o novo nome da pessoa");
                        receber = new Scanner(System.in);
                        String newNome = receber.nextLine();

                        System.out.println("Informe o novo número de telefone da pessoa");
                        receber = new Scanner(System.in);
                        String newTelefone = receber.nextLine();
                        registroExiste = registroExistente(arquivo, newNome, newTelefone); 
                        if(registroExiste){
                            try{
                                AtualizarRegistro(arquivo,name,telefone,newNome,newTelefone);}
                            catch(IOException e){
                                System.out.println(e);   
                            }
                        }else{
                         System.out.println("Já existe um registro igual em nossa lista telefônica! Aperte ENTER para continuar...");
                         System.in.read();
                        }
                    }     
                break;
                case 4:
                    System.out.println("Informe o nome da pessoa a ser excluida");
                    receber = new Scanner(System.in);
                    name = receber.nextLine();
                    
                    System.out.println("Informe o número de telefone da pessoa a ser excluido");
                    receber = new Scanner(System.in);
                    telefone = receber.nextLine();
                
                    excluir = exclRegistro(arquivo,name,telefone);
                    
                    if(excluir == true)
                        System.out.println("Exclusão realizada com sucesso! Aperte ENTER para continuar.");
                    else
                        System.out.println("Registro não encontrado e, portanto, exclusão não realizada! Aperte ENTER para continuar.");
                    
                    System.in.read();
                break;
                default:
                    System.out.println("Escolha uma opção válida! Aperte ENTER para continuar...!");
                    System.in.read();
            }
        }
    }
}
