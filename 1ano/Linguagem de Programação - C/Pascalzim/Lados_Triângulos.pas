Program Lados_Triangulos ;
VAR X,Y,Z:REAL;
Begin
writeln('Digite o comprimentos dos tr�s lados do tri�ngulo');
readln(X,Y,Z);
IF (X+Y>=Z) AND (Y+Z>=X) AND (Z+X>=Y) THEN
writeln('� um tri�ngulo!')
ELSE
writeln('N�o � um tri�ngulo');
IF (X=Y) AND (Y=Z) AND (Z=X) THEN
writeln('O tri�ngulo � equilatero');
IF (X=Y) AND (X<>Z) AND (Y<>Z) THEN
writeln('O tri�ngulo � isosceles');
IF (X<>Y) AND (Y<>Z) AND (Z<>X) THEN
writeln('O tri�ngulo � escaleno');
//O programa n�o esta completo!


  
End.                                                                