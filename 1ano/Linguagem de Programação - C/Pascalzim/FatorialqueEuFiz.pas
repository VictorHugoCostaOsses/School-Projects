Program Pzim ;
var fatorial,n2,n3:INTEGER;
Begin
writeln('Escolha um número');
readln(n2);
fatorial:=1;
for n3:= 1 to n2 do  
fatorial:=(n3*fatorial);
writeln(fatorial); 
readkey;
end.