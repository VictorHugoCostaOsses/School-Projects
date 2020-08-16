void setup()
{
  Serial.begin(9600);//Taxa de transferencia mais adequada para texto
}//Serial manda informações de forma binaria 

void loop()
{
	Serial.write("Oi!\n");
  Serial.write("A\n");
  Serial.write(65);
  	delay(1000);
}