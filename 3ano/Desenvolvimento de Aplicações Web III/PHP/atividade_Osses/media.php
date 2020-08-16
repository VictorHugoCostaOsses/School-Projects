<?php
    session_start();
    if (!isset($_SESSION["login"])) header("location:acesso.php");
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculo da média</title>
    <link rel="stylesheet" type="text/css" href="css/style.css">
</head>

<body>

<?php 
        include("menu.html");
?>

<div>
    <h1>Exercício 1:</h1>
        <form id="media" method="POST">
                <span>Informe sua media:</span>
                <input type="text" class="text" name="media">
                <br><br>
                <input type="submit" value="Verificar" class="verificar" name="btnVerificar">
                <br><br>
        </form>
</div>

</body>
</html>

<?php


$valorAntigo;
$valorAtual;    

    if($_POST){
        $valor = htmlspecialchars($_POST["media"]);

        if($valor >= 0 && $valor <= 10 && $valor != "" && is_numeric($valor) ){
            switch($valor){
            case $valor >= 6: echo " A sua media é $valor e, por isso, você foi  <x>APROVADO!</x>";
            break; 
            
            case  $valor < 6 && $valor >=3: echo "A sua media é $valor e, por isso, você está de  <y>DEPENDÊNCIA!</y>";
            break; 

            case  $valor < 3: echo "A sua media é $valor e, por isso, você está  <z>REPROVADO!</z>"; 
            break;}

            if(!isset($_COOKIE["valorMedia"])) setcookie("valorMedia", $valor, time() + 24*30*2*30*2);
            
            else{ 
                $valorAntigo = $_COOKIE["valorMedia"];
                $valorAtual = $valor;

                setcookie("valorMedia", $valor, time() + 24*30*2*30*2);
        
                if ($valorAtual >= $valorAntigo) 
                echo " <br><x>Parabéns " .$_SESSION["login"]. "! Você melhorou!</x>";
                else  echo " <br><z>Você já foi mais estudioso,</z> " . "<z>" .$_SESSION["login"]. "!</z>";
            }
        }
        else echo " Informe um valor <z>váldido!</z>"; 
    }  
?>
