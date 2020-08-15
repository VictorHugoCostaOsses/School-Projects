Program CrescenteDescrescenteEntre ;
uses crt;
var opcao,A,B,C:INTEGER;
Begin
writeln('Escolha uma opcao:');
writeln('1 - A,B e C em ordem crescente');
writeln('2 - A,B e C em ordem decrescente');
writeln('3 - O maior fica entra os dois números');
readln(opcao);

writeln('Digite três números');
readln(A,B,C);

	case opcao of
		1:
			if (A<B) AND (A<C) then
			    Begin
						if (B<C) then
						writeln('A ordem decrescente é ' ,A,'<',B,'<',C)
						else
						writeln('A ordem decrescente é ',A,'<',C,'<',B);
					end;
		end;
		
		if (B<A) AND (B<C) then
	   begin
				if (A<C) then
				writeln('A ordem decrescente é ' ,B,'<',A,'<',C)
				else
				writeln('A ordem decrescente é ' ,B,'<',C,'<',A);
		 end;
		 
		 if (C<B) AND (C<A) then
			    Begin
						if (A<B) then
						writeln('A ordem decrescente é ' ,C,'<',A,'<',B)
						else
						writeln('A ordem decrescente é ',C,'<',B,'<',A);
					end;
				
					
					
	 case opcao of			
	  2:
	   if (A<B) AND (A<C) then
			    Begin
						if (B<C) then
						writeln('A ordem decrescente é ' ,C,'<',B,'<',A)
						else
						writeln('A ordem decrescente é ',B,'<',C,'<',A);
					end;
				end;
	 
		
		if (B<A) AND (B<C) then
	   begin
				if (A<C) then
				writeln('A ordem decrescente é ' ,C,'<',A,'<',B)
				else
				writeln('A ordem decrescente é ' ,A,'<',C,'<',B);
		 end;
		 
		  if (C<B) AND (C<A) then
			    Begin
						if (A<B) then
						writeln('A ordem decrescente é ' ,B,'<',A,'<',C)
						else
						writeln('A ordem decrescente é ',A,'<',B,'<',C);
					end;
				
		 
		 
	
  

End.