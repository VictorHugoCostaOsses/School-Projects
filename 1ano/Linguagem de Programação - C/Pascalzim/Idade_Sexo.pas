Program Idade_Sexo ;   
var idade,sexo:INTEGER;
Begin  
writeln('Digite sua idade e sexo sendo que 1 é masculino , e  2 é feminino');
readln(idade,sexo);
IF (idade>=18) AND (sexo=1) THEN 
writeln('Você é maior de idade, já pode dirigir e seu alistamento é obrigatório')
ELSE
IF (idade>=18) AND (sexo=2) THEN
writeln('Você é maior de idade e já pode dirigir')
ELSE
IF (idade<18) THEN
writeln('Você é menor de idade');
END.
