int led = 12;
int count = 0;

void setup()
{
  pinMode(led, OUTPUT);//Modo como o pino vai trabalhar - SAIDA

}

void loop()//Infinito
{
digitalWrite(led, 1);//Comando para um pino digital (analogWrite para pinos fisicos)
  // 1 ou HIGH para passar corrente - 0 ou LOW para acabar com a corrente;
  delay(1000); // 1 segundo ligado
  digitalWrite(led, 0);
  delay(1000); // 1 segundo desligado
  count++;
  
  if(count == 10){
    digitalWrite(led, HIGH);
  	exit(-1);
  }
}