Program datas ;
uses crt;
var dia, mes, ano, dia2, mes2, ano2:integer;
Begin
	writeln('Digite o dia, o m�s e o ano respectivamente:');
	readln(dia,mes,ano);
	
	writeln('Digite outro dia, m�s e ano respectivamente:');
	readln(dia2,mes2,ano2);
	
		if(ano > ano2) then
			writeln('A maior data �: ', dia,'/',mes,'/',ano);
			
		if(ano < ano2) then
			writeln('A maior data �: ', dia2,'/',mes2,'/',ano2)
		else
			if(mes < mes2) then
			
	 
End.