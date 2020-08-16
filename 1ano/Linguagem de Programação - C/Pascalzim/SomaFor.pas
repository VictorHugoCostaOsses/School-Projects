Program Pzim ;
uses crt;
var n,soma:INTEGER;
Begin
soma:=0;
writeln('Apresentar o total da soma obtida dos cem primeiros números inteiros ( 1 + 2 + ... + 99 +100');
for n:= 1 to 100 do
soma:=(soma + n);
writeln(soma);
readkey;

  
End.