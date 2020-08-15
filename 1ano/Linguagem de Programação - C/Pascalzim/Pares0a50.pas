Program Pzim ;
uses crt;
var n:INTEGER;
Begin
writeln('Este programa mostra os numeros pares de 0 a 50');
for n:= 0 to 50 do
if (n mod 2=0) then
Begin
writeln(n)
end;
  
End.