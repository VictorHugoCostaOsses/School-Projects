Program idade ;
USES CRT;
VAR idade:INTEGER;
Begin
	clrscr;
writeln('Digite a idade');
readln(idade);
CASE idade OF
0..3: writeln('Beb�');
4..10:
Begin
writeln('Crian�a');
writeln('Aproveite para brincar bastante');
end;
11..18:
Begin
writeln('Adolescente');
writeln('Acabou a brincadeira, � hora de estudar Tawara, e n�o ficar namorando palha�o');
end
ELSE
writeln('Adulto');
end;
readkey;
                                                   
End.