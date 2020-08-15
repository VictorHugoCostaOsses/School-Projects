Program NotasPonderadas ;
uses crt;
var A,B,C:REAL;
r:INTEGER;

Begin
writeln('Digite a nota do Trabalho de Laboratório, da Avaliação Semestral e do Exame final respectivamente');

readln(A,B,C);
 r:= trunc ((A*0.2)+(B*0.3)+(C*0.5));
 
 writeln('A nota do aluno ponderada do aluno é ' ,r);
 
   case trunc (r) of
   
	 0..2:
   writeln('O conceito do aluno é E');
   3..4:
   writeln('O conceito do aluno é D');
   5..6:
   writeln('O conceito do aluno é C');
   7..8:
   writeln('O conceito do aluno é B');
   9..10:
   writeln('O conceito do aluno é A');
   
  end;


  
End.