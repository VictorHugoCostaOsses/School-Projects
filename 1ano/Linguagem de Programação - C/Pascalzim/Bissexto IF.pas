Program Pzim ;
var a: integer;
Begin
writeln('Digite um ano');
readln(a);
IF (a<=1900) or (a>=2012) then
 writeln('Ano invalido')
 else if (a mod 400 = 0) then
  writeln('O ano ',a,' é bissexto')
 else if (a mod 4 = 0) and (a mod 100 <> 0) then
  writeln('O ano ',a,'e bissexto')
  else
  writeln('O ano ',a,'nao e bissexto ');
  End.
  
  
