char letra;

int leds[4] = {5, 4, 3, 2};
int tempo = 500;
int x = 0;
int z = 0;
int sequencia = 0;

void setup()
{
  Serial.begin(9600);
  
   while(x<4){
   pinMode(leds[x], OUTPUT);
   x++;
   }
  
   x = 0;

}

void ledsLOW(){
  
  while(z < 4){
  digitalWrite(leds[z], LOW);
  z++;
  }
  
}

void loop()
{
  
  if(sequencia == 0){
      z = 0;
      ledsLOW();
   
      digitalWrite(leds[x], HIGH);
      delay(tempo);
      digitalWrite(leds[x], LOW);
      delay(tempo);
    
       x++;
      if(x == 4) 
    x = 0;
  }
  
  else if(sequencia == 1){
     z = 0;
     ledsLOW();
    
     digitalWrite(leds[x], HIGH);
     delay(tempo);
     digitalWrite(leds[x], LOW);
     delay(tempo);
    
     if(x == 0){
     x = 4;}
     x--;
  }
  
    else if(sequencia == 2){
      z = 0;
      ledsLOW();
      }

      else if(sequencia == 3){
      if(x < 4){
      digitalWrite(leds[x], HIGH);
      x++;}

      else{}
  }
 
    while(Serial. available() > 0) {
    letra =  Serial.read();
  
      if(letra == 'a' || letra == 'A'){
      sequencia = 1;
      x = 4;}
      
      else if(letra == 'b' || letra == 'B')
      sequencia = 2;
        
      else if(letra == 'c' || letra == 'C'){
      sequencia = 3;
      x = 0;}
        
      else if(letra == 'd' || letra == 'D'){
      sequencia = 0;
      x = 0;}
    }  
}
