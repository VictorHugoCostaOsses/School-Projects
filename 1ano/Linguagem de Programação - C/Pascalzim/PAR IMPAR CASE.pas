Program PARIMPAR ;
USES CRT;
VAR n,r:integer;
Begin
clrscr;
write('Digite um número inteiro:');
readln(n);
r:= n MOD 2;
CASE r OF
0:
 begin
  writeln('O número digitado foi o ',n);
  writeln('Resultado: par!')
  end;
end;  
  if (r>0) then
  Begin
  writeln('O número digitado foi o ',n);                    
  writeln('Resultado: ímpar! ');
 end;

 readkey;
  
End.