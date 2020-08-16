package exgetset_osses;

public final class RegistroAcademico {
    private String nome;
        private int RA;
        private int idade;
        private String curso;
        private String classe;


        RegistroAcademico(String nome, int RA, int idade, String curso, String classe){
        setNome(nome);
        setRA(RA);
        setIdade(idade);
        setCurso(curso);
        setClasse(classe);
        }

        RegistroAcademico(String nome){
        setNome(nome);
        setRA(0);
        setIdade(0);
        setCurso("");
        setClasse("");
        }
 
        RegistroAcademico(int RA){
        setNome("");
        setRA(RA);
        setIdade(0);
        setCurso("");
        setClasse("");
        }

        RegistroAcademico(){
        setNome("");
        setRA(0);
        setIdade(0);
        setCurso("");
        setClasse("");
        }
        
        public String toString(){
        String informacao = "Seu nome é " + getNome() + 
                            " e você tem " + getIdade() + 
                            " anos" + ", você faz o curso de " + getCurso() + 
                            " e está na classe " + getClasse() + 
                            " e só pra finalizar o seu RA é " + getRA() + ".";
        
        return informacao;
        }
        
        //Sets and Gets
        public void setNome(String nome) {
        this.nome = nome;
        }
        
        public String getNome() {
        return nome;
        }
        
        public void setRA(int RA) {
        this.RA = RA;
        }
        
        public int getRA() {
        return RA;
        }
        
        public void setIdade(int idade) {
        this.idade = idade;
        }
        
        public int getIdade() {
        return idade;
        }
        
        public void setCurso(String curso) {
        this.curso = curso;
        }
        
        public String getCurso() {
        return curso;
        }
        
        public void setClasse(String classe) {
        this.classe = classe;
        }
        
        public String getClasse() {
        return classe;
        }
        
      
}
