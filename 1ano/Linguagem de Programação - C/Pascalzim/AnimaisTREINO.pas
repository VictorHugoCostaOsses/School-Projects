Program animais ;
uses crt;
var opcao,opcao2,opcao3:integer;

Begin
    writeln('Digite uma op��o:');
    writeln('1 - Mam�feros');
    writeln('2 - Aves');
    writeln('3 - R�pteis');
    readln(opcao);
    
  case opcao of
    	1: 	begin
						writeln('Digite outra op��o:');
				    writeln('1) Quadrupedes');
				    writeln('2) B�pedes');
				    writeln('3) Voadores');
				    writeln('4) Aqu�ticos');
				    readln(opcao2);
				    
				    if opcao2 = 1 then
				    begin
				       	writeln('Digite mais uma op��o:');
						  	writeln('1) Carn�voros');
						    writeln('2) Herb�voros');
						    readln(opcao3);
						    
						    if opcao3 = 1 then
						    	writeln('O animal escolhido foi o Le�o!')
						    else
						    	writeln('O animal escolhido foi o Cavalo!');
				    end;
				    
				    if opcao2 = 2 then
				    begin
				    	  writeln('Digite outra op��o:');
						  	writeln('1) On�voro');
						    writeln('2) Frut�fero');
						    readln(opcao3);
						                                   
						    if opcao3 = 1 then   
						    	writeln('O animal escolhido foi o Homem!')
						    else
						    	writeln('O animal escolhido foi o Macaco!');
				    end;
				    
				    if opcao2 = 3 then
				    	writeln('O animal escolhido foi o Morcego!')
				    	else
				    if opcao2 = 4 then
				    	writeln('O animal escolhido foi a Baleia!')
			    end;			    
    end;
    
    case opcao of
    
  2:
    Begin
	      writeln('Escolah outra op��o:');
	      writeln('1 - N�o voadores');
	      writeln('2 - Nadadores');
	      writeln('3 - Rapina');
	      readln(opcao2);
	      
			      
			  if opcao2 = 1 then
			  Begin
				  writeln('Escolha mais uma op��o:');
				  writeln('1 - Tropical');
				  writeln('2 - Polar');
				  readln(opcao3);
		    
		      if opcao3 = 1 then
		      writeln('O animal escolhido foi o Avestruz!');
		      if opcao3 = 2 then
		      writeln('O animal escolhido foi o Pinguim!');
        end;
      
       if opcao2 = 2 then
         writeln('O animal escolhido foi Pato!')
				 else
				if opcao2 = 3 then
			   writeln('O animal escolhido foi a �guia!');
    end;
end;
    
case opcao of
3:
		 Begin
				 writeln('Digite outra op��o:');
				 writeln('1 - Com caso');
				 writeln('2 - Carn�voros');
				 writeln('3 - Sem patas');
				 readln(opcao2);
				 
				 if opcao2 = 1 then
				 writeln('O animal escolhido foi a Tartaruga!');
				 if opcao2 = 2 then
				 writeln('O animal escolhido foi o Crocodilo!')
				 else
				 writeln('O animal escolhido foi a Cobra!');
		 end;
end;

	
		
  
End.