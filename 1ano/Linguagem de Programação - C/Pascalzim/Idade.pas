Program idade ;
USES CRT;
VAR idade:INTEGER;
Begin
	clrscr;
writeln('Digite a idade');
readln(idade);
CASE idade OF
0..3: writeln('Bebê');
4..10:
Begin
writeln('Criança');
writeln('Aproveite para brincar bastante');
end;
11..18:
Begin
writeln('Adolescente');
writeln('Acabou a brincadeira, é hora de estudar Tawara, e não ficar namorando palhaço');
end
ELSE
writeln('Adulto');
end;
readkey;
                                                   
End.