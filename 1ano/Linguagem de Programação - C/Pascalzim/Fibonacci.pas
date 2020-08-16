Program fibonacci ;
uses crt;
var a,b,i,aux,n1: Integer;
begin
  writeln('Até onde vai');
  readln(n1);
  a := 0;  
  b := 1; 
  Writeln(a);   
  Writeln(b);
  for i := 0 to n1 do  
  begin
    Writeln(a + b) ;  
    aux := a;        
    a := b;          
    b := (b + aux);    
   end; 
	readkey;          
  
end.  