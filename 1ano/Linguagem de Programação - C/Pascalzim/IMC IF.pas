Program KilosAltura ;
uses crt;
var altura,peso,IMC:REAL;
Begin
writeln('Digite sua altura em metros');
readln(altura);
writeln('Digite seu peso');
readln(peso);

IMC:=(peso/(altura*altura));

if (IMC<20) then
 Begin
			writeln('Voc� esta abaixo do peso' ,IMC:0:2);
			writeln('Seu IMC � ' ,IMC:0:2)
 end;

if (IMC>=20)  AND (IMC<25) then
  Begin
			writeln('Voc� esta no peso ideal');
				writeln('Seu IMC � ' ,IMC:0:2)
	end
  else
   Begin                                   
			writeln('Voc� esta acima do peso');
				writeln('Seu IMC � ' ,IMC:0:2);
   end;                                                    

  
End.