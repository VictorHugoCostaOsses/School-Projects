function VereficarIdade(){
	var idade = document.getElementById("idade").value;
    var resultado = document.getElementById("idadeExibir");



	if (idade > 18)
		resultado.innerHTML = "Pode ser preso";
	else
		resultado.innerHTML = "Não pode ser preso";
}