Program Comissao_Produtos_Case ;
uses crt;
var comissao:REAL;
nome:STRING;
produtos,opcao:INTEGER;

Begin
 writeln('Digite o nome do funcionario');
 readln(nome);

 writeln('Digite quantos produtos ele vendeu');
 readln(produtos);
 
		writeln('Digite uma opcao:');
		writeln('1 - Se o funcionario vendeu ',produtos,'<=250 produtos');
		writeln('2 - Se o funcionario vendeu  vendeu 250>',produtos,'<=500');
		writeln('3 - Se o funcionario vendeu ',produtos,'>500 produtos');
		readln(opcao);

case opcao of
  1:
   if (produtos<=250) then
	 Begin
	  comissao:=(produtos*1.00);
	  writeln('O funcionoraio ' ,nome, ' vendeu ' ,produtos, ' produtos e por isso tera a comissao de R$' ,comissao:0:2);
	 end
	  else
	  writeln('Vc digitou a opcão errada');
	

	   2:
	   if (250<produtos) AND (produtos<=500) then
	  Begin
		  comissao:=(produtos*1.5);
		  writeln('O funcionoraio ' ,nome, ' vendeu ' ,produtos, ' produtos e por isso tera a comissao de R$' ,comissao:0:2);
		end
		  else
	    writeln('Vc digitou a opcão errada');
		  
		  
	 

	    3:
	    if  (produtos>500) then
	    Begin
	     comissao:=(produtos*2);
	     writeln('O funcionoraio ' ,nome, ' vendeu ' ,produtos, ' produtos e por isso tera a comissao de R$' ,comissao:0:2);
	    end
	     else
	     writeln('Vc digitou a opcão errada');
end;


  
End.