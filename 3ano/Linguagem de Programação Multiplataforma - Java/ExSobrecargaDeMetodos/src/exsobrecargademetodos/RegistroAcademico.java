package exsobrecargademetodos;


public class RegistroAcademico {
      private String nome;
        private int RA;
        private int idade;
        private String curso;
        private String classe;


        RegistroAcademico(String nome, int RA, int idade, String curso, String classe){
        this.nome = nome;
        this.RA = RA;
        this.idade = idade;
        this.curso = curso;
        this.classe = classe;
        }

        RegistroAcademico(String nome){
        this(nome, 0,0,"","");
        }

        RegistroAcademico(int RA){
        this("", RA,0,"","");
        }

        RegistroAcademico(){
        this("", 0,0,"","");
        }
        
        public String toString(){
        String informacao = "Seu nome é " + nome + 
                            " e você tem " + idade + 
                            " anos" + ", você faz o curso de " + curso + 
                            " e está na classe " + classe + 
                            " e só pra finalizar o seu RA é " + RA + ".";
        
        return informacao;
        }
}
