Program Pzim ;
uses crt;
var n,o,fat:INTEGER;
Begin
writeln('Calcular o Fatorial de um número qualquer solicitado pelo usuário. Sabendo que: 5! = 5 * 4* 3 * 2 * 1 = 120');
writeln('Digite um número');
readln(o);
fat := 1;
for n:=1 to o do
fat:= fat * n;

writeln(fat);
  
End.