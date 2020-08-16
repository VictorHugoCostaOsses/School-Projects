int recebido = 0;
int led = 13;
int count = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}


void loop()
{

if(Serial.available() > 0){
recebido = Serial.parseInt();}
  
   if(count < recebido){
  
      digitalWrite(led,HIGH);
      delay(1000);
      digitalWrite(led,LOW);
      delay(1000);
      
      count++;
  }
  
 }

  
