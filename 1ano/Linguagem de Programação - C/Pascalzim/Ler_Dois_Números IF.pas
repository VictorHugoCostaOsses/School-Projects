Program Ler_Dois_Numeros ;
var n1,n2,d:REAL;
Begin
writeln('Digite dois numeros');
readln(n1,n2);
IF (n1>n2) THEN 
 BEGIN
d:=(n1-n2);
writeln ('A diferenca do maior numero pelo menor e ',d:0:2);
 END
ELSE
IF (n2>n1) THEN 
 BEGIN  
   d:=(n2-n1);
	 writeln ('A diferenca do maior numero pelo menor e ',d:0:2);
 END 
else
IF (n1=n2) then
writeln('A a diferença entre eles  é sempre igual a zero');

End.