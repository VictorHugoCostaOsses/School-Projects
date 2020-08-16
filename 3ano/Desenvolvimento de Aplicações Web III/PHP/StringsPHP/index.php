<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício de String e Criptografia</title>
</head>
<body>
<form method="POST">
    <input type="text" placeholder="Informe seu nome" name="nome" style="width: 200px;padding:4px">
    <br><br>
    <input type="password" name="senha" style="width: 200px;padding:4px" placeholder="Informe sua senha">
    <br><br>
    <input type="submit" value="entrar" style="border-radius: 3px; padding:4px;width:100px;"><br>
</form>

<?php

if ($_SERVER["REQUEST_METHOD"] === 'POST'){
    $nome = $_REQUEST['nome'];
    $senha = $_REQUEST['senha'];

    $tratamentosNome = htmlspecialchars(ucwords(trim(strrev(strtolower(str_replace("simone","Victor Hugo Costa Osses",$nome))))));
    echo "<p>" . $tratamentosNome . "</p>";
    echo "<p>" . crypt($tratamentosNome, "") . "</p>";
}


?>
</body>
</html>