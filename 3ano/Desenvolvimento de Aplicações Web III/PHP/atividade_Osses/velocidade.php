<?php
    session_start();
    if (!isset($_SESSION["login"])) header("location:acesso.php");
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cálculo da velocidade</title>
    <link rel="stylesheet" type="text/css" href="css/style.css">

</head>
<body>

<?php 
    include("menu.html");
?>

<div>
    <h1>Exercício 2:</h1>

    <form method="POST" >
            <span>Informe a v0 (m/s):</span>
            <input type="text" class="text" name="vIni">
            <br><br>
            <span>Informe a Aceleração (m/s²):</span>
            <input type="text" class="text" name="acel">
            <br><br>
            <span>Informe o Tempo (s):</span>
            <input type="text" class="text" name="tempo">
            <br><br>
            <input type="submit" value="Verificar" class="verificar" name="btnVerificar">
            <br><br>
            
    </form>
</div>

<?php

$resultAtual;
$resultAntigo;

    if($_POST){
        
        if($_POST['vIni'] != "" &&  $_POST['tempo'] != "" &&  $_POST['acel'] != ""){
            $vIni = htmlspecialchars($_POST['vIni']);
            $tempo = htmlspecialchars($_POST['tempo']);
            $acel = htmlspecialchars($_POST['acel']);

            $resultAtual = ($vIni + ($acel * $tempo))*3.6;
            echo " <x>Vf = $resultAtual Km/h</x> ";
        }
        if (!isset($_COOKIE['velocidadeFinal']) == 1) setcookie("velocidadeFinal", $resultAtual, time() + 24*30*2*30*2);
        else{
            $resultAntigo = $_COOKIE['velocidadeFinal'];
            setcookie("velocidadeFinal", $resultAtual, time() + 24*30*2*30*2);
            echo $resultAntigo >= $resultAtual ? "<br><z>Acelere! Você já foi mais rápido!</z>" : "<br><x>O que houve? Você está correndo demais em relação sua viagem anterior!</x>";
        }
    }
?>


</body>
</html>