Program Pzim ;
uses crt;
var n,multi,p:INTEGER;
Begin
writeln('Digite um n�mero qualquer');
readln(p);
for n:= p to p*10 do
if (p mod p=0) then
writeln(n);
readkey;
  
End.