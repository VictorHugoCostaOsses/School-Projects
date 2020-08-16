int led  = 2;
int led2 = 3;
long escolha = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  while(Serial.available() > 0) {
  escolha =  Serial.parseInt();
  
    if(escolha == 1){
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000); 
    }
    
    else if(escolha == 2){
    digitalWrite(led2, HIGH);
    delay(1000); 
    digitalWrite(led2, LOW);
    delay(1000); 
    }
    
  }
  
}
