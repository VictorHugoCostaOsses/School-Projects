Program EX_B ;
USES CRT;
VAR A,B,C:INTEGER;
Begin
	WRITELN('DIGITE TRÊS VALORES');
	READLN(A,B,C);
	IF(A<=B)AND(A<=C)
		THEN
			IF(B<=C)
				THEN
					WRITELN(A,B,C)
				ELSE	
					WRITELN(A,C,B)
		ELSE		
			IF(B<=A)AND(B<=C)
				THEN
					IF(A<=C)
						THEN
							WRITELN(B,A,C)
						ELSE	
							WRITELN(B,C,A)
				ELSE		
					IF(A<=B)
						THEN
							WRITELN(C,A,B)
						ELSE
							WRITELN(C,B,A);
	READLN;
End.