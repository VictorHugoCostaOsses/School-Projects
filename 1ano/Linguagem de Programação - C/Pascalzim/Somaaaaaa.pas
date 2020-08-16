Program Pzim ;
uses crt;
var n,soma,p:INTEGER;
Begin
soma:=0;
writeln('Digite um número');
readln(p);
for n:= p to p+10 do
soma:= (soma + n);
writeln(soma);
 
  
End.