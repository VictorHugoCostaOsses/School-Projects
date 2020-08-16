Program media ;
USES crt;
var n:integer;
Begin
write('Digite qualquer numero inteiro');
readln(n);
IF(n < 10) THEN writeln('Menor que 10');
IF(n > 10) THEN writeln('Maior que 10');
IF(n=10) THEN writeln('Igual a 10');
  
End.