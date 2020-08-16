<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercícios Array - PHP</title>
    <link rel="stylesheet" href="style.css">

</head>
<body>
    <form method="POST">
        <h3>Turma:</h3><br>
        <input type="text" name="turma" id="turma"><input type="submit" value="Enviar"><br><br>
    </form>

    <?php
    $turmas = array(
        "INFD3"
        =>array("16117"=>"Amanda Oliveira Santos",
        "16557"=>"Bruno Penteado Carrara",
        "16563"=>"Cibele Souza de Almeida",
        "16119"=>"Danilo Rafhael",
        "16121"=>"Érika Cavalcanti"),

        "CTI2"
        =>array("17427"=>"Diogo Vinicius Oliveira",
        "17428"=>"Douglas José Figueiredo",
        "17429"=>"Emily Da Silva Farias"),

        "INFN3"=>array("16227"=>"Andre Ricardo Martins",
        "16573"=>"Andre Schinor Mena Peres",
        "16228"=>"Beatriz Santos de Mello",
        "16229"=>"Caio Ramos Ballarin",
        "16231"=>"Carlos Eduardo Lima")
    );

    if ($_SERVER["REQUEST_METHOD"] === "POST"){
        $turmaEscolhida = $_POST["turma"];
        
        if ($turmaEscolhida == "INFD3" || $turmaEscolhida == "CTI2" || $turmaEscolhida == "INFN3") {
            echo "<h2> TURMA : ". $turmaEscolhida ."</h2><br>";
            foreach($turmas[$turmaEscolhida] as $indice  => $valor){
                echo $indice." : ".$valor."<br>";
            }
        }else{
            echo "<vermelho>AVISO: Turma não encontrada!</vermelho>";
        }
    }
    ?>
</body>
</html>