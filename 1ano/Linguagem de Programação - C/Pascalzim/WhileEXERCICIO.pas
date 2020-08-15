Program exeche ;
uses crt;
var n,n1,opcao: integer;
Begin
opcao:=1;
while opcao <> 0 do
 Begin

	writeln('Digite um numero');
	
	readln(n);
		writeln('Digite outro numero');
		readln(n1);
			writeln('Escolha uma opcao:');
			writeln('1 - Soma');
			writeln('2 - Subtracao');
			writeln('3 - Multiplicacao');
			writeln('4 - Divisao');
			readln(opcao);  

  case opcao of
		1:writeln(n,' + ',n1,' = ',n+n1);
		2:writeln(n,' - ',n1,' = ',n-n1);
		3:writeln(n,' x ',n1,' = ',n*n1);
		4:writeln(n,' / ',n1,' = ',n/n1:0:2);
  end;

 end;
 readkey                                        

 
End.