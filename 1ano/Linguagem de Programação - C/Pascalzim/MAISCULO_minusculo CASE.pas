
Program caso1 ;
USES CRT;
VAR letra: char;
Begin
clrscr;
write('Digite uma letra:');
readln(letra);
CASE letra OF
'A'..'Z':writeln('Letra maiuscula');
'a'..'z':writeln('Letras minuscula')
else
writeln('Você não digitou uma letra');
END;
readkey;
End.