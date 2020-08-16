function converterF()
{
var recebe = document.getElementById("Informado").value;
var calculo = (recebe * 1.8)+32;
document.getElementById("inputF").value = calculo;
}

function converterK()
{
var recebe = parseInt(document.getElementById("Informado").value);
var calculo = 273 + recebe;
document.getElementById("ExibirK").innerHTML = calculo;
document.getElementById("ExibirK").style.color="red";
}