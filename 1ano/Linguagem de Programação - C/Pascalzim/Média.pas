Program ex_se2 ;
var n1,n2,media:REAL;
Begin
writeln('As duas notas do aluno');
readln(n1,n2);
media:=(n1+n2)/2;
writeln('Sua media foi ',media:0:1);
IF (media >= 6) THEN writeln('O aluno foi aprovado')
ELSE writeln('O aluno foi reprovado');


End.
