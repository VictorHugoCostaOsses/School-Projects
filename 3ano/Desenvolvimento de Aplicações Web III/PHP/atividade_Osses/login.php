<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>

    <link rel="stylesheet" href="https://fonts.googleapis.com/icon?family=Material+Icons"> 
    <link href="https://fonts.googleapis.com/css?family=Berkshire+Swash|Josefin+Sans&display=swap" rel="stylesheet">
    <link rel="stylesheet" href="css/login.css">
</head>
<body>

<form id="loginModal" method="POST">

<div id="body-login" style="overflow-y:auto">

    <div id="header-login">
        <span id="loginTitle" >Login</span>
    </div> 

    <div id="conteudo-login" >

        <div class="inputsLogin">
            <img alt=""> 
                <span>Usuário</span>
                <input type="text" id="username" name="login"  placeholder="Usuário: Victor" label="Informe seu usuário">

                <span>Senha</span>
                <input type="password" name="senha" maxlength="15" style="margin-top: 15px;" id="password" placeholder="Senha: 12345">
        </div> 

        <input type="checkbox" style="margin: 25px 0px 10px 11%;">
        <span style="margin: 0px 0px 10px 0px;">Manter dados salvos?</span>

    </div> 
    
    <div id="footer-login">
        <input style="cursor:pointer;" type="submit" id="confirmation" value="Acessar" >
        <p>Ainda não possui uma conta? Cadastre-se <a href="#">aqui</a>.</p>
    </div> 

</div> 

</form> 

<?php

session_start();
if(isset($_SESSION["login"])) session_destroy();

if ($_SERVER["REQUEST_METHOD"] == 'POST') {

    $login = $_POST["login"];
    $senha = $_POST["senha"];

    if ($login == "Victor" && $senha == "12345") {

        $_SESSION["login"] = $login;
        $_SESSION["senha"] = $senha;

        header("location:media.php");
    } else {
        echo "<h1>Usuário inválido!</h1>";
    }
}

?>

</body>
</html>


