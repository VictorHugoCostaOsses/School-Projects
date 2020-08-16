
var Tc = document.querySelector('input#Tc');
var inputTc = document.querySelector('input#inputTc');

inputTc.addEventListener('click',function converterTF(){
recebe = Tc.value;
console.log(recebe);
recebe = (recebe * 1.8)+32;
document.getElementById("exibirTf").value = recebe; 

});


function converterTk()
{
var recebe = parseInt(document.getElementById("Tc").value);
recebe = recebe+273;
document.getElementById("exibirTK").innerHTML = recebe;
document.getElementById("exibirTK").style.color="red";
}

// var vetor = new Array(5);
// for(var i = 0; i < vetor.length; i++)
// {
// 	vetor[i] = prompt("Posição do vetor:["+ i +"]");
// }

// var dados = "<h3>Dados do vetor</h3><br><br>";

// for(var i = 0; i<vetor.length; i++)
// {
// 	dados = dados + vetor[i] + "<br>";
// }

document.getElementById("exibirV").innerHTML = dados;

// var materias = ["Português","Matemática","Física"];
// var materias2 = ["TD",1,"DAW"];

// var tudo = materias.concat(materias2);

// for(var x = 0; x<tudo.length; x++)
// {
// 	console.log(tudo[x]);
// }

