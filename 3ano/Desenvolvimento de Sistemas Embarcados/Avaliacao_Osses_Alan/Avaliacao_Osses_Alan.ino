/*
  Alan Vinícius de Souza 18119 - 3INFD
    Victor Hugo Costa Osses 18152 - 3INFD
*/

int leds[10] = {0,1,2,3,4,5,6,7,8,9};
int x = 0;
int tempo = 0;
int seg = 1000;

void setup()
{ 
   while(x <= 9){
   pinMode(leds[x], OUTPUT);
   x++;}
}

void loop()
{  
  
  if(tempo >= 7 && tempo <= 9)
    digitalWrite(leds[6], 1);//ligar amarelo do semáfaro 2 - 3s
    else{
    digitalWrite(leds[6], 0);//desligar amarelo do semáfaro 2

    if(tempo >= 17 && tempo < 20){
    digitalWrite(leds[4], 0);//desligar verde do semáfaro 1
    digitalWrite(leds[3], 1);}//ligar amarelo do semáfaro 1
    else
    digitalWrite(leds[3],0);//desligar amarelo do semáfaro 1
  }
  
    if(tempo < 10){
    digitalWrite(leds[2], 1);// ligar vermelho do semáfaro 1 - 10s
      digitalWrite(leds[8], 1);// ligar vermelho da faixa 2 - 10s
  
      if(tempo < 7){
        digitalWrite(leds[7], 1);// ligar verde do semáfaro 2 - 7s
      digitalWrite(leds[1], 1);}// ligar verde da faixa 1 - 7s
      else{
       digitalWrite(leds[7], 0);//desligar verde do semáfaro 2 - 7s
      }
    }
  
  else if(tempo > 9 && tempo < 21){
    digitalWrite(leds[2], 0);// desligar vermelho do semáfaro 1 
    digitalWrite(leds[8], 0);// desligar vermelho da faixa 2 
    digitalWrite(leds[9], 1);// ligar verde da faixa 2
    digitalWrite(leds[5], 1);// ligar vermelho do semáfaro 2 
    
    if(tempo > 9 && tempo < 17)
    digitalWrite(leds[4], 1);//ligar verde do semáforo 1 - 7s

    if(tempo > 9 && tempo <= 12){
    digitalWrite(leds[1], 0);// desligar verde da faixa 1 
    digitalWrite(leds[0], 1);// ligar vermelho da faixa 1 
    }
 }

  delay(seg); 
  tempo++;
  
  if(tempo == 20){ 
  digitalWrite(leds[9], 0);// desligar verde da faixa 2
  digitalWrite(leds[0], 0);// desligar vermelho da faixa 1 
  digitalWrite(leds[5], 0);// desligar vermelho do semáfaro 2
  tempo = 0;// reiniciar semáforos
  }
}
