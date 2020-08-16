<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exemplo de matrizes associativas</title>
</head>
<body>

<?php
echo "<h3>Arrays</h3>";
$carros = array(1=>"BMW",2=>"Veloster",3=>"Hilux");
$carros[] = "Amarok";
$carros[10] = "Camaro";
print_r($carros);
print_r("<br>". $carros[2]);

$motos = array();
$motos[] = "Yamaha";
$motos[] = "Honda";
$motos[5] = "Suzuki";
print_r($motos);

echo "<br>" . $motos[5] . "<br>";

//foreach - PARA CADA. Usamos essa estrutura para percorrer um array. Aqui estamos atribuindo os valores do vetor para a variável $valor
echo "<br>Atribuindo cada valor contido no vetor 'carros ' a uma variável chama 'valor' e printando na tela<br>";
foreach($carros as $valor) {
    echo $valor . "<br>";
}

echo $carros[1] . "<hr>";


echo "<h3>Função Count</h3>";
//count 
echo "O vetor 'carros' possui: " . count($carros) . " elementos - count(var) ";
echo "<br>O vetor 'motos' possui: " . count($motos) . " elementos - count(var) <br><hr>";

// Arrays Associativos - Quando os indíces do array são STRINGS
echo "<h3>Arrays Associativos</h3>";
$pessoa = array("nome" => "Rodrigo", "idade" => 23,"altura" => 1.75);
$pessoa["cidade"] = "Itabuna";
print_r($pessoa);
echo  "<br>" . $pessoa["nome"] . "<br><br>";

foreach($pessoa as $indice => $valor){
    echo $indice.":".$valor."<br>";
}

echo "<br><hr>"; 

// Arrays multidimensionais 
echo "<h3>Arrays multidimensionais</h3>";
$times = array(
        "cariocas"=> array("campeao"=>"vasco","vice"=>"flamengo","terceiro"=>"botafogo"),
        "paulistas"=> array("santos","sao paulo", "palmeiras"),
        "baianos"=> array("bahia","vitoria","itabuna")
);

echo $times["cariocas"][0] . "<br>";
echo $times["paulistas"][1] . "<br>";
echo $times["baianos"][2] . "<br>";

echo "Quantidade no time dos cariocas: " . count($times["cariocas"]) . "<br><br>";

foreach($times["cariocas"] as $indice => $valor){
    echo $indice.": ".$valor."<br>";
}
?>



</body>
</html>
