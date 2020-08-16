int led = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}


void loop()
{
  
  char caractere;

  
  while(Serial.available() > 0) {

    caractere = Serial.read();
    
    if(caractere == 'a'){
    Serial.print(" .- ");} 
    
    else if(caractere == 'b')
    Serial.print(" -... "); 
      
    else if(caractere == 'c')
    Serial.print(" -.-. "); 
      
    else if(caractere == 'd')
    Serial.print(" -.. "); 
      
    else if(caractere == 'e')
    Serial.print(" . "); 
      
    else if(caractere == 'f')
    Serial.print(" ..-. "); 
    
    else if(caractere == 'g')
    Serial.print(" --. "); 
      
    else if(caractere == 'h')
    Serial.print(" .... "); 
      
    else if(caractere == 'i')
    Serial.print(" .. "); 
      
    else if(caractere == 'j')
    Serial.print(" .--- "); 
      
    else if(caractere == 'k')
    Serial.print(" -.- "); 
      
    else if(caractere == 'l')
    Serial.print(" .-.. "); 
    
    else if(caractere == 'm')
    Serial.print(" -- "); 
      
    else if(caractere == 'n')
    Serial.print(" -. "); 
      
    else if(caractere == 'o')
    Serial.print(" --- "); 
    
    else if(caractere == 'p')
    Serial.print(" .--. ");
      
    else if(caractere == 'q')
    Serial.print(" .-.. "); 
    
    else if(caractere == 'r')
    Serial.print(" .-. "); 
      
    else if(caractere == 's')
    Serial.print(" ... "); 
    
    else if(caractere == 't')
    Serial.print(" - "); 
      
    else if(caractere == 'u')
    Serial.print(" ..- "); 
      
    else if(caractere == 'v')
    Serial.print(" ...- "); 
      
    else if(caractere == 'w')
    Serial.print(" .-- "); 
      
    else if(caractere == 'x')
    Serial.print(" -..- "); 
      
    else if(caractere == 'y')
    Serial.print(" -.-- "); 
    
    else if(caractere == 'z')
    Serial.print(" --.. "); 
      
    else if(caractere == '1')
    Serial.print(" .--- "); 
      
    else if(caractere == '2')
    Serial.print(" ..--- "); 
    
    else if(caractere == '3')
    Serial.print(" ...-- ");
      
    else if(caractere == '4')
    Serial.print(" ....- "); 
    
    else if(caractere == '5')
    Serial.print(" ..... "); 
      
    else if(caractere == '6')
    Serial.print(" -.... "); 
    
    else if(caractere == '7')
    Serial.print(" --... "); 
      
    else if(caractere == '8')
    Serial.print(" ---.. "); 
      
    else if(caractere == '9')
    Serial.print(" ----. "); 
      
    else
    Serial.print(" ----- "); 
      
    delay(10);
  }

    
}
