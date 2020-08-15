Program Pzim ;
USES crt;
VAR x,n: integer;
Begin 
write('Digite um numero inteiro ');
readln(x);
IF(x>0) AND (x<10) then
BEGIN
writeln('Entre 0 e 10');
write('Digite outro numero: ');
readln(n);
writeln('O numero digitado foi:>',n);
END
ELSE
BEGIN
IF (x>=10) AND (x<50) THEN
BEGIN
writeln('Entre 10 e 50');
write('Digite outro numero;');
readln(n);
writeln('O numero digitado foi:',n);
end
 else
 writeln('Numero maior que 50!!!');
 END;
 END.