Program teste_program ;
uses crt;
var menu,x,op,cor:INTEGER;
Begin
REPEAT
CLRSCR;
 WRITELN('---------------------------------');
 WRITELN('| 1 | BLUE |');
 WRITELN('| 2 | GREEN |');
 WRITELN('| 3 | CYAN |');
 WRITELN('---------------------------------');
  WRITELN('Digite 1 para cor da letra , ou 2 para fundo e 0 para sair');
  readln(op);
  if (op <> 0) then
  BEGIN
  writeln('Digite o número da cor desejada:');
  readln(cor);
  
  case op of
  1:textcolor (cor);
  2:textbackground (cor);
  end;
  end;
  until op = 0;
  write('Terminado! Tecla pra sair');
  
End.