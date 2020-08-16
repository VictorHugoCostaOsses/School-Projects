Program diasemaninha ;
uses crt;
var diasem:INTEGER;
Begin
writeln('Escolha uma opcao:');
writeln('1 - Domingo');
writeln('2 - Segunda-Feira');
writeln('3 - Terça-Feira');
writeln('4 - Quarta-Feira');
writeln('5 - Quinta-Feira');
writeln('6 - Sexta-Feira');
writeln('7 - Sábado');
readln(diasem);

 case diasem of
		  1: 
		     writeln('O dia escolhido foi Domingo!');
		  2:
			   writeln('O dia escolhido foi Segunda-Feira!');
		  3: 
			   writeln('O dia escolhido foi Terça-Feira!'); 
			4:
			   writeln('O dia escolhido foi Quarta-Feira!');
			5:
			   writeln('O dia escolhido foi Quinta-Feira!');
			6: 
			  writeln('O dia escolhido foi Sexta-Feira!');
			7:
			  writeln('O dia escolhido foi Sábado');
			  else
			  writeln('O dia escolhido não existe!');
		  	
     
 
  end;
End.