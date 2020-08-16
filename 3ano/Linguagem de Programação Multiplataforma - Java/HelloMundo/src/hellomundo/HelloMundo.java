/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
// Tudo que eu quero que rode junto com nosso projeto.
// O java é case Sensitive.
package hellomundo;

/**
 *
 * @author aluno
 */

// Aqui ficam todas as informações referentes a classe - Atributos e métodos
public class HelloMundo {

    /**
     * @param args the command line arguments
     */
    
    // Classe principal - busca a informação do que vai ser rodado
    public static void main(String[] args) { //Static sera executado antes de qualquer coisa 
        System.out.println("Hello Mundo!");
        System.err.println("Mensagem destacada - de erro!");
        System.out.println("Olá:" + args[1]);//E necessario colocar um valor dentro dessa posição para não dar erro
        //As posições do vetor args[] são separados por espaço
        

        //Nome da classe, campo, método
    }

    
}
