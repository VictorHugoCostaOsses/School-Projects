Program Idade_Sexo ;   
var idade,sexo:INTEGER;
Begin  
writeln('Digite sua idade e sexo sendo que 1 � masculino , e  2 � feminino');
readln(idade,sexo);
IF (idade>=18) AND (sexo=1) THEN 
writeln('Voc� � maior de idade, j� pode dirigir e seu alistamento � obrigat�rio')
ELSE
IF (idade>=18) AND (sexo=2) THEN
writeln('Voc� � maior de idade e j� pode dirigir')
ELSE
IF (idade<18) THEN
writeln('Voc� � menor de idade');
END.
