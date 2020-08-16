int led = 13;
int count = 1;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}


void loop()
{
  if(count <= 4)
  music(count);
  else
  exit(0);
  
  count++;
}

void music(int linha){
  if(linha == 1){
    Serial.print(count);
    Serial.print(" elefante");
    
     for(int x = 0; x < count; x++){
      delay(700);
       
      Serial.print(" incomoda ");
      digitalWrite(led, HIGH);
       
      delay(700);
      digitalWrite(led, LOW);
    }
    
    Serial.println("muita gente!");
    delay(700);
    
  }
  
  else if(count % 2 != 0){
    Serial.print(count);
    Serial.print(" elefantes");
    delay(700);
    
    Serial.print(" incomodam ");
    digitalWrite(led, HIGH);
    delay(700);
    
    Serial.println("muita gente! ");
    digitalWrite(led, LOW);
    delay(700);
  }
  
  else{
  Serial.print(count);
  Serial.print(" elefantes");
  delay(700);
    for(int x = 0; x < count; x++){
      Serial.print(" incomodam ");
      digitalWrite(led, HIGH);
      delay(500);
      digitalWrite(led, LOW);
      delay(500);
    }
    
    Serial.println("muito mais!");
    delay(700);
  }

}
