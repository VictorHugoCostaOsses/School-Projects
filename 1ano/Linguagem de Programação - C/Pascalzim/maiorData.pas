Program datas ;
uses crt;
var dia, mes, ano, dia2, mes2, ano2:integer;
Begin
	writeln('Digite o dia, o mês e o ano respectivamente:');
	readln(dia,mes,ano);
	
	writeln('Digite outro dia, mês e ano respectivamente:');
	readln(dia2,mes2,ano2);
	
		if(ano > ano2) then
			writeln('A maior data é: ', dia,'/',mes,'/',ano);
			
		if(ano < ano2) then
			writeln('A maior data é: ', dia2,'/',mes2,'/',ano2)
		else
			if(mes < mes2) then
			
	 
End.