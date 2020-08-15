Program Valores_Ordem_Crescente ;
VAR A,B,C:REAL;
Begin
writeln('Digite três valores');
readln(A,B,C);
Begin
IF (A>B) AND (B>C) THEN                     
writeln('A ordem crescente dos valores é ' ,A, ' , ' ,B, ' e ' ,C, ')
ELSE 
IF (B>A) AND (C>A) THEN
writeln('A ordem crescente dos valores é ' ,B, ' , ' ,C, ' e ' ,A, ')
ELSE
IF (C>A) AND (A>B) THEN
writeln('A ordem crescente dos valores é ' ,C, ' , ' ,A, ' e ' ,B, ');
end;
End.                                                       