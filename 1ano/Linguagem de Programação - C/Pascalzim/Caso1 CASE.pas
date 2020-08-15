Program CASO1 ;
USES CRT;
VAR opcao: integer;
Begin
clrscr; //limpa o terminal - CRT
write('Digite um numero inteiro:');
readln(opcao);
CASE opcao OF
 1:writeln('Digitou 1!');
 2:writeln('Digitou 2!');
 3:writeln('Digitou 3!');
  ELSE
    writeln('Digitou outro numero');
 END; 
End.