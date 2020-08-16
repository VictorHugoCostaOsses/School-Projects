Program Exercicio_pag26_1 ;
var a,b,y:real;
Begin
writeln('Digite dois numeros');
readln(a,b);

IF (a>b) THEN 
  BEGIN
    y:=(a+b);
	  writeln('O numero ',a:0:2,' e maior que o numero ',b:0:2);
	  writeln('O resultdo da adição do maior número pelo menor é ' ,y:0:2);
  END;
  
  if (a<b) then
  Begin
  y:=(b-a);
     writeln('O numero ',b:0:2,' e maior que o numero ',a:0:2);
     writeln('O resultdo da subtração do maior número pelo menor é ' ,y:0:2);
  end;
  
  if (b=a) then
  Begin
   writeln('O numero ',b:0:2,' é igual ao numero  ' ,a:0:2);
   writeln('A subtração de numero iguais sempre resulta em zero');
  end;
  







  
End.