Program PARIMPAR ;
USES CRT;
VAR n,r:integer;
Begin
clrscr;
write('Digite um n�mero inteiro:');
readln(n);
r:= n MOD 2;
CASE r OF
0:
 begin
  writeln('O n�mero digitado foi o ',n);
  writeln('Resultado: par!')
  end;
end;  
  if (r>0) then
  Begin
  writeln('O n�mero digitado foi o ',n);                    
  writeln('Resultado: �mpar! ');
 end;

 readkey;
  
End.