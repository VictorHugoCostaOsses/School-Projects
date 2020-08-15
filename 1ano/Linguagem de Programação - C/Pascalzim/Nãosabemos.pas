Program Pzim ;
uses crt;
var n,multi,p:INTEGER;
Begin
writeln('Digite um número qualquer');
readln(p);
for n:= p to p*10 do
if (p mod p=0) then
writeln(n);
readkey;
  
End.