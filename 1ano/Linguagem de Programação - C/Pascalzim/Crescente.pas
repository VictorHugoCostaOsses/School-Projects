Program crescente ;
VAR n1, n2, n3 : integer;
Begin
 write('Digite a nota 01: ');
 readln(n1);
 write('Digite a nota 02: ');
 readln(n2);
 write('Digite a nota 03: ');
 readln(n3);
 
 if (n1 < n2) AND (n1 < n3) then
 begin 
   if (n2 < n3) then
    writeln('Ordem crescente e: ',n1,' ',n2,' ',n3)
    else
    writeln('Ordem crescente e: ',n1,' ',n3,' ',n2)
    end
    
    else if (n2 < n1) AND (n2 < n3) then
    begin
    if (n1 < n3) then
    writeln('Ordem crescente e: ',n2,' ',n1,' ',n3)
    else
    writeln('Ordem crescente e: ',n3,' ',n2,' ',n1);
    end
    
    else if (n3 < n2) AND (n3 < n1) then
		begin
		if (n1 < n2) then
		writeln('Ordem crescente e:',n3,' ',n1,' ',n2)
		else 
		writeln('Ordem crescente e:',n3,' ',n2,' ',n1);
		end;
		readkey;
  
End.