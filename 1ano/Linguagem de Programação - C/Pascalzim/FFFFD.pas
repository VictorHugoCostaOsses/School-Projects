Program teste_faca ;
uses crt;
var menu,x,cor: integer;
Begin
clrscr;
textbackground(GREEN);
REPEAT
	writeln('1. Limpar a tela');
	writeln('2. Preencher a tela com X');
	writeln('3. Mudar a cor das letras');
	writeln('0. Terminar o programa');
	readln(menu);
	
		case menu of
			1:clrscr;
			2:BEGIN
						x:=0;
						 while x <= 2018 do
						  BEGIN                                         
						   write('x');
						   x:= x+1;
	  				  end;
					writeln('Tecla para continuar');	
					readln;
				end;
			
			3: BEGIN
				writeln('1. verde');   
				writeln('2. vermelho');
				writeln('3. azul');
				writeln('4. INVISIVEL');
				readln(cor);
				
				
				if cor = 1 then textcolor(GREEN)
				else if cor = 2 then textcolor(RED)
				else if cor = 3 then textcolor(BLUE)
				else if cor = 4 then textcolor(BLACK);
				end;
				 end;
				until menu = 0;
				write('Terminado! Tecle para sair')
				
				
           
End.