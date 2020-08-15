Program exemplo2Wh ;
uses crt;
var x: integer;

Begin
writeln('So saira com ZERO');
writeln;
x:=76;
while x <> 0 do
	Begin
		write('Digite um numero:');
		readln(x);
	END;
	readln;
	readkey;
  
End.