package heranca;

public class Corsa extends Automovel{
    private String fabricante;
    
    Corsa(String placa, String tipoAutomovel,String fabricante){
    super(placa,tipoAutomovel);
    setFabricante(fabricante);
    }

    public String toString(){
    String resultado;
    resultado = super.toString() + " e sua fabricante é a " + fabricante ;
       
    return resultado;
    }
    
   public void setFabricante(String fabricante){
   this.fabricante = fabricante;
   }
}
