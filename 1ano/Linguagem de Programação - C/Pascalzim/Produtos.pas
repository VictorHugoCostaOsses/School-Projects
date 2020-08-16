Program Comissao_Funcionario ;
uses crt;
var comissao:REAL;
nome:STRING;
produtos:INTEGER;
Begin
  writeln('Digite o nome do fúncionario');
  readln(nome);
  writeln('Digite a quantidade de produtos vendidos');
	readln(produtos);	

 if (produtos<=250) then
  Begin
		comissao:=(produtos*1.00);
		writeln('O funcionarios ' ,nome, ' vendeu ' ,produtos, ' produtos e por isso tera a comissão de ' ,comissao:0:2, ' reais');
	end;
	
		if (250<produtos) AND (produtos<=500)then
		begin
	    comissao:=(produtos*1.5);
			writeln('O funcionarios ' ,nome, ' vendeu ' ,produtos, ' produtos e por isso tera a comissão de ' ,comissao:0:2, ' reais');
		end;
	
			if (500<produtos) then
				begin
			    comissao:=(produtos*2);
					writeln('O funcionarios ' ,nome, ' vendeu ' ,produtos, ' produtos e por isso tera a comissão de ' ,comissao:0:2, ' reais');
				end;
			


  
End.