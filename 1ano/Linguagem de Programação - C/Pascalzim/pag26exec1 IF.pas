Program Exercicio_pag26_1 ;
var a,b,y:real;
Begin
writeln('Digite dois numeros');
readln(a,b);

IF (a>b) THEN 
  BEGIN
    y:=(a+b);
	  writeln('O numero ',a:0:2,' e maior que o numero ',b:0:2);
	  writeln('O resultdo da adi��o do maior n�mero pelo menor � ' ,y:0:2);
  END;
  
  if (a<b) then
  Begin
  y:=(b-a);
     writeln('O numero ',b:0:2,' e maior que o numero ',a:0:2);
     writeln('O resultdo da subtra��o do maior n�mero pelo menor � ' ,y:0:2);
  end;
  
  if (b=a) then
  Begin
   writeln('O numero ',b:0:2,' � igual ao numero  ' ,a:0:2);
   writeln('A subtra��o de numero iguais sempre resulta em zero');
  end;
  







  
End.