<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercícos PHP</title>
</head>

<style>

h1{color: darkblue;}

form span{font-size: 22px;}

input.text{
height: 22px;
width:200px;}

input.verificar{
height: 30px;
width: 100px;}

x{color: green;}
y{color:orange;}
z{color:red;}

</style>
<body>

<h1>Exercício 1:</h1>
    <form method="POST">
            <span>Informe sua media:</span>
            <input type="text" class="text" name="media">
            <br><br>
            <input type="submit" value="Verificar" class="verificar" name="btnVerificar">
            <br><br>

    </form>

    <?php

    if($_POST){
        $valor = $_POST['media'];
        if($valor >= 0 && $valor != ""){
        if($valor >= 6)
        echo "A sua media é $valor e por isso você foi  <x>APROVADO!</x>.";

        else if($valor < 6 && $valor >=3) 
        echo "A sua media é $valor e por isso você está de  <y>DEPENDÊNCIA!</y>.";

        else
        echo " A sua media é $valor e por isso você está  <z>REPROVADO!</z>.";
    }

    }

    ?>
<h1 style="margin-top: 50px">Exercício 2:</h1>
<form method="GET" >
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


<?php

if($_GET){

        if($_GET['vIni'] != "" &&  $_GET['tempo'] != "" &&  $_GET['acel'] != ""){

        $vIni = $_GET['vIni'];
        $tempo = $_GET['tempo'];
        $acel = $_GET['acel'];

        $result = ($vIni + ($acel * $tempo))*3.6;
        echo "<x>Vf = $result Km/h</x>";}

    }

?>

</body>
</html>