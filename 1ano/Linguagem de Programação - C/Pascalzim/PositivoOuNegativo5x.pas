Program Pzim ;
var n,inteiro:INTEGER;
Begin 
 
   for n:= 1 to 5 do    
	   readln(inteiro); //armazenando 5 vezes na mesma variável, só está contando o ultimo armazenamento!
		 n:=0; 
	   inteiro:=(inteiro+inteiro);
	   for n:= 1 to 5 do    
	    if inteiro > 0 then
	   writeln('Positivo');
	   if inteiro < 0 then 		   
	 writeln('Negativo');  
	 
readkey; 

	  
		
		
		 
 

  
End.