Program TESTEfor;
uses crt;
var i: INTEGER;
Begin 
for i:= 10 downto 1  do
if (i mod 2=1) then
Begin
writeln(i);
end;
readkey;
  
End.