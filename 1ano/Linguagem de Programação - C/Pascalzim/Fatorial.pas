Program Pzim ;
uses crt;
var n,o,fat:INTEGER;
Begin
writeln('Calcular o Fatorial de um n�mero qualquer solicitado pelo usu�rio. Sabendo que: 5! = 5 * 4* 3 * 2 * 1 = 120');
writeln('Digite um n�mero');
readln(o);
fat := 1;
for n:=1 to o do
fat:= fat * n;

writeln(fat);
  
End.