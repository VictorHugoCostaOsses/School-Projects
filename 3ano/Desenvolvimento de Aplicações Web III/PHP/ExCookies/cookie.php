<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aprendendo a usar COOKIES</title>
</head>
<body>


<?php


if(isset($_COOKIE['acessos'])) 
$acessos = $_COOKIE['acessos'] + 1;
//Verificando se o cookie já não foi criado
else $acessos = 1;
//Criando cookie caso ele não exista no bronser do usuário.


setcookie("acessos",$acessos, time() + (30*24*60*60)); 
// Recriando o cookie "acessos toda vez que o usário entra na página" - nome, valor , duração em segundos. A informação é guardada no próprio Brownser do usuário.
//Expirando o cookie: setcookie("acessos",$acessos, time() - (30*24*60*60)); 
echo "Este é o seu acesso de número " .$acessos. "<br>";
?>



</body>
</html>