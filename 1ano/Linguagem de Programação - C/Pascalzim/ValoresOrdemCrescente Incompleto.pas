Program Valores_Ordem_Crescente ;
VAR A,B,C:REAL;
Begin
writeln('Digite tr�s valores');
readln(A,B,C);
Begin
IF (A>B) AND (B>C) THEN                     
writeln('A ordem crescente dos valores � ' ,A, ' , ' ,B, ' e ' ,C, ')
ELSE 
IF (B>A) AND (C>A) THEN
writeln('A ordem crescente dos valores � ' ,B, ' , ' ,C, ' e ' ,A, ')
ELSE
IF (C>A) AND (A>B) THEN
writeln('A ordem crescente dos valores � ' ,C, ' , ' ,A, ' e ' ,B, ');
end;
End.                                                       