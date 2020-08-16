Program mediaAnual ;
var ma,m2,m1,EXAME:REAL;


Begin
writeln('Digite a média do 1º Semestre e do a do 2º Semestre respctivamente');
readln(m1,m2);

ma:=(m1+(m2*2)/3);
EXAME:=(12-ma);
writeln('A média anual do aluno foi ' ,trunc ma);

	case trunc (ma) of
		0..3:
			writeln('O aluno foi reprovado!');
	
		4..6: Begin
				writeln('O aluno passará por um exame!');
				writeln('O aluno necessita de ',EXAME:0:1,' para passar de ano!');      
	       end;
		7..10:
			   writeln('O aluno foi aprovado!');          



  end;
End.