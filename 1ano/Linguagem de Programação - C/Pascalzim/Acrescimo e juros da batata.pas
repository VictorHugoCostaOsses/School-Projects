Program legal ;
var a,b,c:integer;
Begin
writeln('Digite dois números');
readln(a,b);
writeln('Você armazenou o valor ',a, ' em a');
writeln('Você armazenou o valor ',b, ' em b');
c:=a;
a:=b;
b:=c;
writeln('Depois da troca você tem:');
writeln('a= ',a);
writeln('b= ',b);

End.         