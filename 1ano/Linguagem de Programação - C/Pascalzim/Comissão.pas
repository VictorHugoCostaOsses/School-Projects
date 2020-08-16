Program Pzim ;
var cod,q:integer;
c,p:real;
v:string[10];
Begin     
writeln('Digite o nome do vendedor');
readln(v);
writeln('Digite o codigo do produto e a quantidade');
readln(cod,q);
writeln('Digite o preço do produto');
readln(p);
c:=p*q*0.05;
writeln('A comissão do vendedor ',v,' é de R$' ,c:0:2);
End.