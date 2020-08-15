Program EX_C ;
USES CRT;
VAR A,B,C,D:REAL;
Begin
	WRITELN('DIGITE O VALOR DE A,B E C, RESPECTIVAMENTE');
	READLN(A,B,C);
	IF(A=0)
		THEN
			WRITELN('NÃO É POSSÍVEL REALIZAR A EQUAÇÃO DO SEGUNDO GRAU COM ESSES VALORES')
	  ELSE
	  	BEGIN
		  	D:=SQR(B)-(4*A*C);
			  IF(D>=0)
			  	THEN
			 			IF(D=0)
			 				THEN
								WRITELN('X= ',-B/(2*A):0:2)
							ELSE
				 				BEGIN
				  				D:=SQRT(D);
									WRITELN('X¹= ',(-B+D)/(2*A):0:2,' E X²= ',(-B-D)/(2*A):0:2);
								END
					ELSE
	  				WRITELN('DELTA= ',D:0:2,'. PORTANTO, NÃO EXISTEM RAIZES REAIS');
			END;
	READLN;
End.