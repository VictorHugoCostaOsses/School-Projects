Program Pzim ;
uses crt;
var menu,corletra,corfundo:INTEGER;
Begin
REPEAT
	writeln('1. Mudar a cor das letras');
	writeln('2. Mudar a cor da tela de fundo');
	writeln('99. Para sair');
	readln(menu);
	
case menu of

	1: Begin
			writeln('1- Preto');
			writeln('2- Azul');
			writeln('3- Marrom');
			writeln('4- Amarelo');
			writeln('5- Vermelho');
			readln(corletra);
	
				if corletra = 1 then textcolor (BLACK)
				else if corletra = 2 then textcolor (BLUE)
				else if corletra = 3 then textcolor (BROWN)
				else if corletra = 4 then textcolor (YELLOW)
				else if corletra = 5 then textcolor (RED);
				writeln('Tecle para sair')
				end;
				
		2: Begin
		  writeln('Escolha a cor de fundo');
		  writeln('1- Preto');
			writeln('2- Azul');
			writeln('3- Marrom');
			writeln('4- Amarelo');
			writeln('5- Vermelho');
			readln(corfundo);
			
			if corfundo = 1 then textbackground (BLACK)
			else if corfundo = 2 then textbackground (BLUE)
			else if corfundo = 3 then textbackground (BROWN)
			else if corfundo = 4 then textbackground (YELLOW)
			else if corfundo = 5 then textbackground (RED);
			end;
		  end;
			until menu = 99;
			readkey;

End.