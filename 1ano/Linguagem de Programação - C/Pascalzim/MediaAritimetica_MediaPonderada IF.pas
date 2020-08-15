Program MediaAritimetica_MediaPonderada;
VAR N:STRING;
n1,n2,n3,r1,r2:REAL;
Begin
Clrscr;
writeln('Digite o nome do aluno');
readln(N);
writeln('Digite as três notas do aluno');
readln(n1,n2,n3);
r1:=((n1+n2+n3)/3);
r2:=((n1*2+n2*3+n3*4)/9);
IF (r1>r2) THEN
writeln('As notas do aluno ' ,N, ' são: ' ,n1:0:2, ' , ',n2:0:2, ' e ',n3:0:2, ' e o resultado mais interrassante para o aluno é o resultado da média aritimética que é ' ,r1:0:2)
ELSE
IF (r2>r1)  THEN
writeln('As notas do aluno ' ,N, ' são: ' ,n1:0:2, ' , ',n2:0:2, ' e ',n3:0:2, ' e o resultado mais interrassante para o aluno é o resultado da média ponderada que é ' ,r2:0:2);
 
End.
