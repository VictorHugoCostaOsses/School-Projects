package heranca;

public class Automovel {
    private String placa;
    private String tipoAutomovel;
    
    Automovel(String placa, String tipoAutomvel){
    settipoAutomvel(tipoAutomvel);
    setPlaca(placa);
    }
    
    public String toString(){
    String resultado;
    resultado = "O tipo do seu carro é " + tipoAutomovel + ". A placa dele é " + placa;
    return resultado;
    }
    
    public void setPlaca(String placa){
    this.placa = placa;
    }

    public void settipoAutomvel(String tipoAutomvel){
    this.tipoAutomovel = tipoAutomvel;
    }
 
}
