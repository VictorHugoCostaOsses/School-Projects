
package heranca;

import java.text.SimpleDateFormat;
import java.util.Date;

public class Pessoa {
    private String nome;
    private int identidade;
    private Date nascimento;
    
    Pessoa(String nome, int identidade, Date nascimento){
    setNome(nome);
    setIdentidade(identidade);
    setNascimento(nascimento);
    }
    
    public String toString(){
    SimpleDateFormat formato = new SimpleDateFormat("dd/MM/yyyy");
    return "Nome: " + nome + "\nIdentidade: " + identidade + "\nData de nascimento: " + formato.format(nascimento); 
    }
    
    public void setNome(String nome){
    this.nome = nome;
    }
    
    public void setIdentidade(int identidade){
    this.identidade = identidade;
    }
    
    public void setNascimento(Date nascimento){
    this.nascimento = nascimento;
    }
    // 
    
    
    
}
