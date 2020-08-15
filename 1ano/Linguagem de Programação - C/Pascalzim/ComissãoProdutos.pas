Program ComissaoFuncionario ;
uses crt;
var  comissao:REAL;
produtos:INTEGER;
nome:STRING;
Begin
writeln('Digite o nome do funcionario');
readln(nome);
writeln('Digite quantos produtos o funcionario vendeu');
readln(produtos);
comissao:=(produtos*1.00);


if (produtos<=250)   then
Begin
	comissao:=(produtos*1.00);
	writeln('O funcionario ' ,nome, ' vendeu ' ,produtos, ' produtos e por isso tera a comissão de R$' ,comissao:0:2, ' reais '); 
end;

if (produtos>250) AND (produtos<=500)  then
  Begin
		comissao:=(produtos*1.5);
		writeln('O funcionario ' ,nome, ' vendeu ' ,produtos, ' produtos e por isso tera a comissão de R$' ,comissao:0:2, ' reais');
  end;

if (produtos>500)  then
    Begin
			comissao:=(produtos*2);
			writeln('O funcionario ' ,nome, ' vendeu ' ,produtos, ' produtos e por isso tera a comissão de R$' ,comissao:0:2, ' reais');
    end;

  
End.