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
						writeln('Digite uma opção:');
				    writeln('1) Quadrupedes');
				    writeln('2) Bípedes');
				    writeln('3) Voadores');
				    writeln('4) Aquáticos');
				    readln(opcao2);
				    
				    if opcao2 = 1 then
				    begin
				       	writeln('Digite uma opção:');
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
				    	  writeln('Digite uma opção:');
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
    	2:begin
						writeln('Digite uma opção:');
				    writeln('1) Não Voadores');
				    writeln('2) Nadadores');
				    writeln('3) Rapina');
				    readln(opcao2);
				    
				    if opcao2 = 1 then
				     begin
				       	writeln('Digite uma  outra opção:');
						  	writeln('1) Tropical');
						    writeln('2) Polar');
						    readln(opcao3);
						    
						    if opcao3 = 1 then
						    	writeln('O animal escolhido foi o Avestruz!')
						    else
						    	writeln('O animal escolhido foi o Pinguim!');
						    	
				     end;
						  
				    if opcao2 = 2 then
				    	writeln('O animal escolhido foi o Pato!')
				      else
				      if opcao2 = 3 then
				    	writeln('O animal escolhido foi a Aguia!')
				    	
				 end; 
		end;//fecha o primeiro beguin
		
		case opcao of
		3:  Begin
								writeln('Escolha uma opcao');
								writeln('1 - Com casco');
								writeln('2 - Carnívoros');
								writeln('3 - Sem patas ');
								readln(opcao2);
								
								if opcao2 = 1 then
								writeln('O animal escolhido foi a tartaruaga');
								
								if opcao2 = 2 then
								writeln('O animal escolhido foi o crocodilo');
								if opcao2 = 3 then
								writeln('O animal escolhido foi a cobra')
								
								
					end;	
		end;
		 
		 			    
  
 End.         