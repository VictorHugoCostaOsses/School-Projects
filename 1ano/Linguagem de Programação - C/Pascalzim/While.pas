Program ExWhile;
uses crt;
var i,n:INTEGER;
Begin
write('Digite um numero');
readln(n);
i:= 0;
while i<= 10 do 
if n mod 2=0 then
Begin
writeln(i,'x',n,'=',i*n);
i:= i + 1;
end;
readln;


  
End.                                                          