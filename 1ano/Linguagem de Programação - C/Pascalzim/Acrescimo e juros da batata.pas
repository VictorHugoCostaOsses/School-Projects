Program legal ;
var a,b,c:integer;
Begin
writeln('Digite dois n�meros');
readln(a,b);
writeln('Voc� armazenou o valor ',a, ' em a');
writeln('Voc� armazenou o valor ',b, ' em b');
c:=a;
a:=b;
b:=c;
writeln('Depois da troca voc� tem:');
writeln('a= ',a);
writeln('b= ',b);

End.         