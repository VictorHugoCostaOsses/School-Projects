package heranca;

import java.util.Date;

public class Ator extends Pessoa{
    private String obraAtuacao;
    
    public Ator(String nome, int identidade, Date nascimento, String obraAtuacao) {
    super(nome, identidade, nascimento);
    setObraAtuacao(obraAtuacao);
    }
    
    public String toString(){
    String resultado;
    resultado = super.toString() + " e você atua atualmente na novela" + obraAtuacao;
        
    return resultado;
    }
    
    public void setObraAtuacao(String obraAtuacao){
    this.obraAtuacao = obraAtuacao;
    }
}
