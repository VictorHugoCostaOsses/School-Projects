Program animais ;
uses crt;
var opcao,opcao2,opcao3:integer;

Begin
    writeln('Digite uma opção:');
    writeln('1 - Mamíferos');
    writeln('2 - Aves');
    writeln('3 - Répteis');
    readln(opcao);
    
  case opcao of
    	1: 	begin
						writeln('Digite outra opção:');
				    writeln('1) Quadrupedes');
				    writeln('2) Bípedes');
				    writeln('3) Voadores');
				    writeln('4) Aquáticos');
				    readln(opcao2);
				    
				    if opcao2 = 1 then
				    begin
				       	writeln('Digite mais uma opção:');
						  	writeln('1) Carnívoros');
						    writeln('2) Herbívoros');
						    readln(opcao3);
						    
						    if opcao3 = 1 then
						    	writeln('O animal escolhido foi o Leão!')
						    else
						    	writeln('O animal escolhido foi o Cavalo!');
				    end;
				    
				    if opcao2 = 2 then
				    begin
				    	  writeln('Digite outra opção:');
						  	writeln('1) Onívoro');
						    writeln('2) Frutífero');
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
	      writeln('Escolah outra opção:');
	      writeln('1 - Não voadores');
	      writeln('2 - Nadadores');
	      writeln('3 - Rapina');
	      readln(opcao2);
	      
			      
			  if opcao2 = 1 then
			  Begin
				  writeln('Escolha mais uma opção:');
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
			   writeln('O animal escolhido foi a Águia!');
    end;
end;
    
case opcao of
3:
		 Begin
				 writeln('Digite outra opção:');
				 writeln('1 - Com caso');
				 writeln('2 - Carnívoros');
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