Program NotasPonderadas ;
uses crt;
var A,B,C:REAL;
r:INTEGER;

Begin
writeln('Digite a nota do Trabalho de Laborat�rio, da Avalia��o Semestral e do Exame final respectivamente');

readln(A,B,C);
 r:= trunc ((A*0.2)+(B*0.3)+(C*0.5));
 
 writeln('A nota do aluno ponderada do aluno � ' ,r);
 
   case trunc (r) of
   
	 0..2:
   writeln('O conceito do aluno � E');
   3..4:
   writeln('O conceito do aluno � D');
   5..6:
   writeln('O conceito do aluno � C');
   7..8:
   writeln('O conceito do aluno � B');
   9..10:
   writeln('O conceito do aluno � A');
   
  end;


  
End.