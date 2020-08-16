 Program Pzin ;
var altura,peso,IMC:real;
Begin
	  writeln('Digite o seu peso');
	  readln(peso);
	  writeln('Digite sua altura');
	  readln(altura);
	  IMC:=peso/(altura*altura);
	  write('O seu IMC é ',IMC);
End.