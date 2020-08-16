Program Lados_Triangulos ;
VAR X,Y,Z:REAL;
Begin
writeln('Digite o comprimentos dos três lados do triângulo');
readln(X,Y,Z);
IF (X+Y>=Z) AND (Y+Z>=X) AND (Z+X>=Y) THEN
writeln('É um triângulo!')
ELSE
writeln('Não é um triângulo');
IF (X=Y) AND (Y=Z) AND (Z=X) THEN
writeln('O triângulo é equilatero');
IF (X=Y) AND (X<>Z) AND (Y<>Z) THEN
writeln('O triângulo é isosceles');
IF (X<>Y) AND (Y<>Z) AND (Z<>X) THEN
writeln('O triângulo é escaleno');
//O programa não esta completo!


  
End.                                                                