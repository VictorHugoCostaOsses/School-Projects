Program Funcionario ;
var n:STRING;
h,slh,sl,s2:REAL;
Begin
writeln('Digite o nome do funcionario seu palhaço');
readln(n);
writeln('Digite o numero de horas trabalhada e o quanto ele ganha por hora trabalhada');
readln(h,slh);
sl:=(h*slh);
Begin
if (h<=8) AND (h>0) THEN
writeln('O salario do funcionario ',n,' e ',sl:0:2)
ELSE
s2:=(sl+(h*(slh/2)));
if (8<h) THEN
writeln('Digite o numero de horas extras trabalhadas');
readln(h);
writeln ('O salario do funcionario ',n,' e ',s2:0:2);





  
End.