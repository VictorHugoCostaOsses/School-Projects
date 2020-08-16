int letra = 65;
const int Z = 90;
int led = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{ 
  Serial.write(letra);
  Serial.print(" - ");
  Serial.print(letra);
  Serial.print("\n");
   
  if(letra % 2 == 0){
  digitalWrite(led, 1);
  delay(1000);
  }
  else{
  digitalWrite(led, 0);
  delay(1000);
  }
  
  letra++;
  delay(1000);
  
  if(letra > 90){
  letra = 65;
  }
 
}