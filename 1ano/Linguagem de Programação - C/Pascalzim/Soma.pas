Program Pzim ;
uses crt;
var n,soma:INTEGER;
Begin
soma:=0;
writeln('Escreve um algoritmo/programa em Pascal que escreve a soma dos números múltiplos de 7 entre 100 e 200.');
for n:= 100 to 200 do
if (n mod 7=0) then
soma:= (soma + n);
writeln(soma);
readkey;

  
End.