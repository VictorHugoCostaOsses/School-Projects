Program Notas_Porcentagem ;
var n:STRING;
e,t,p,r,r2,r3,r4:REAL;
Begin
writeln ('Digite o nome do aluno(a)');
readln(n);
writeln('Digite a nota do exame');
readln(e);
writeln('Digite a nota da atividade');
readln(t);
writeln('Digite a nota do exame final');
readln(p);
r:=(e*0.3);
writeln ('A nota do exame do aluno e ',n,' com o peso da porcentagem e ',r:0:2);
r2:=(t*0.2);
writeln ('A nota do trabalho do aluno ',n,' com o peso da em porcentagem e ',r2:0:2);
r3:=(p*0.5);
writeln ('A nota do exame final do aluno ',n,' com o peso da em porcentagem e ',r3:0:2);
r4:=(r+r2+r3);
if (r4>6) THEN
writeln('O aluno ',n,' esta aprovado com a nota ',r4:0:2)
ELSE
writeln('O aluno ',n,' esta reprovado com a nota ',r4:0:2);
																		 



  
End.