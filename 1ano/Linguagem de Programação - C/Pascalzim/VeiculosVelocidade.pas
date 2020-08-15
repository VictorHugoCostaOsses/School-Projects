Program VelocidadeFinal ;
uses crt;
var aceleracao,tempo,Vi,Vf:REAL;
Begin
		writeln('Digite sua aceleração');
		readln(aceleracao);
		writeln('Digite sua velocidade inicial');
		readln(Vi);
		writeln('Digite o tempo de percurso');
		readln(tempo);
Vf:=((Vi+(aceleracao*tempo))*3.6);

if (Vf<=40) then
Begin
	writeln('Veículo muito lento');
	writeln('Tua velocidade em Km/hr é ' ,Vf:0:2);
end;

if (Vf>40) AND (Vf<=60) then
Begin
	writeln('Velocidade permitida');
	writeln('Tua velocidade em Km/hr é ' ,Vf:0:2);
end;

if (Vf>60) AND (Vf<=80) then
Begin
	writeln('Velocidade de cruzeiro');
	writeln('Tua velocidade em Km/hr é ' ,Vf:0:2);
end;

if (Vf>80) AND (Vf<=120) then
Begin
	writeln('Veículo rápido');
	writeln('Tua velocidade em Km/hr é ' ,Vf:0:2);
end;

if (Vf>120) then
Begin
	writeln('Veículo muito rápido');
	writeln('Tua velocidade em Km/hr é ' ,Vf:0:2);
end;




  
End.