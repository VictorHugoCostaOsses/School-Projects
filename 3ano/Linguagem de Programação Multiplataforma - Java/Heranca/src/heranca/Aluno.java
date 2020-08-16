package heranca;

import java.util.Date;

public class Aluno extends Pessoa {
    private String RA;
    
    public Aluno(String nome, int identidade, Date nascimento, String RA) {
        super(nome, identidade, nascimento);
        setRA(RA);
    }
    
    public String toString(){
    String resultado;
    
    resultado = super.toString() + " e seu RA é " + RA;
        
    return resultado;
    }
    
    public void setRA(String RA){
    this.RA = RA;
    }
    
    
}
