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
        <h3>Valor:</h3><br>
        <input type="number" name="numero" id="numero"><input type="submit" value="Enviar"><br><br>
    </form>

    <?php
    $numbers = array(8,3,4,6,3,8,9,3);

    if ($_SERVER["REQUEST_METHOD"] === "POST"){
        $numero = $_POST["numero"];
        $encontrou = false;
        foreach ($numbers as $value) {
            if ($value == $numero){
                $encontrou = true;
                break;
            }
        }
        if ($encontrou) {
            echo "<verde>Acertou!</verde>";
        } else {
            echo "<vermelho>Errou!</vermelho>";
        }
    }

    ?>
</body>
</html>