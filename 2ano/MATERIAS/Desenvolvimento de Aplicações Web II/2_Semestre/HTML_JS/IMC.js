function calculoIMC(){
var peso = document.getElementById("peso").value;
var altura = document.getElementById("altura").value;
var resultado = document.getElementById("resultado");
var calculoIMC = peso/(altura*altura);
var dadosIMC = "<b>Preencha os campos</b><br><br>";

	if (calculoIMC < 18.5)  
	dadosIMC = "<b>resultado:</b> Abaixo do peso<br><br>" + "Seu peso é: " + calculoIMC;

	if (calculoIMC > 18.6 && calculoIMC < 24.9)
	dadosIMC = "<b>resultado:</b> Peso Ideal<br><br>" + "Seu peso é: " + calculoIMC;

	if (calculoIMC > 25 && calculoIMC < 29.9) 
	dadosIMC = "<b>resultado:</b> Levemente acima do peso<br><br>" + "Seu peso é: " + calculoIMC;

	if (calculoIMC > 30 && calculoIMC < 34.9)
	dadosIMC = "<b>resultado:</b> Obesidade Grau I<br><br>" + "Seu peso é: " + calculoIMC;

	if (calculoIMC > 35 && calculoIMC < 39.9)
	dadosIMC = "<b>resultado:</b> Obesidade Grau II (severa)<br><br>" + "Seu peso é: " + calculoIMC;

	if (calculoIMC > 40 )
	dadosIMC = "<b>resultado:</b> Obesidade III (mórbida)<br><br>" + "Seu peso é: " + calculoIMC;

	resultado.innerHTML = dadosIMC;
}

calculoIMC();
document.getElementById("resultado").style.color = 'red';
document.getElementById("resultado").style.backgroundColor = 'yellow'; 