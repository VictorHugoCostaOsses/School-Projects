Program Pzim ;
uses crt;
var n,soma:integer;
Begin
writeln('Escrever um algoritmo/programa em Pascal que escreve a soma dos n�meros que n�o s�o m�ltiplos de 13 entre 100 e 200.');
soma:=0;
for n:= 100 to 200 do
if n mod 13 <> 0 then
soma:=(soma + n);
writeln(soma);
readkey;
  
End.