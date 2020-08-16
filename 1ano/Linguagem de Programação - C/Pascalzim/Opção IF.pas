Program Pzim ;
uses crt;
var opcao:INTEGER;
a,b,r:REAL;
Begin
writeln('Escolha uma opcao:');
writeln('1 - para SOMA');
writeln('2 - para SUBTRACAO');
writeln('3 - para MULTIPLICACAO');
writeln('4 - para DIVISÃO');
readln(opcao);

case opcao of
	1:  
	 Begin
		 writeln('Digite dois numeros');
		 readln(a,b);
		 r:=(a+b);
		 writeln('A soma do número ' ,a:0:2, ' + ' ,b:0:2, ' é ' ,r:0:2);
	 end;
	 
	2:
	 Begin
		 writeln('Digite dois numeros');
		 readln(a,b);
		 r:=(a-b);
		 writeln('A subtração do número ' ,a:0:2, ' - ' ,b:0:2, ' é ' ,r:0:2);
	 end;
	 
	3:
	 Begin
		 r:=(a*b);
		 writeln('Digite dois numeros');
		 readln(a,b);
		 writeln('A multiplicação do número ' ,a:0:2, ' * ' ,b:0:2, ' é ' ,r:0:2);
	 end;
	 
	4:
	 Begin
		
		 writeln('Digite dois numeros');
		 readln(a,b);
		  r:=(a/b);
		 writeln('A divisão do número ' ,a:0:2,' por ',b:0:2, ' é ' ,r:0:2);
	 end;
end;

 readkey;



   

End.