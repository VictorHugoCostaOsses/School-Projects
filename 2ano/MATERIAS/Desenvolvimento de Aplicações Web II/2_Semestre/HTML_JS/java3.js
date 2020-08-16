
var vetor = new Array(5);

for(var i = 0; i < vetor.length; i++)
{
	vetor[i] = prompt("Valor da posição["+i+"]:js");
}

	var dadosVetor = "<b>Dados do Vetor:</b><br><br>";

		for (var i = 0; i < vetor.length; i++) 
		{
			dadosVetor = dadosVetor + vetor[i] + "<br>";

		}

			var exibeVetorHTML = document.getElementById("exibeVetor");
			exibeVetorHTML.innerHTML = dadosVetor;

			function addPrimeiraPos()
			{
				var valor = document.getElementById("txtValor").value;
				
				if(valor.trim() == "")//trim tira todos os espaços do valor informado e verifica se está vazio
			     {
			    	alert("	Informe um valor!");
			     }

			      else{
			       vetor.unshift(valor);  	/*coloca na primeira posição do vetor*/
                   atualizaTela();
			      }
				
			}

                function addUltimaPos()
				{
	               var valor = document.getElementById("txtValor").value;
	               if(valor.trim() == "")//trim tira todos os espaços do valor informado e verifica se está vazio
			    {
			    	alert("	Informe um valor!");
			    }
			    else
			    {
                   	vetor.push(valor);  /*push coloca na ultima posição do vetor*/
					atualizaTela();
			    }
				
				}

				function removePrimeira()
				{
                    
                     if(vetor.length <= 0)//trim tira todos os espaços do valor informado e verifica se está vazio
				    {
				    	alert("	Vetor vazio!");
				    }
				    else
				    {
		                vetor.shift();  /*Retira da primeira posição do vetor*/	
		                atualizaTela();
				    }
				
				}

				function removeUltimo()
				{

                   if(vetor.length <= 0)//trim tira todos os espaços do valor informado e verifica se está vazio
				    {
				    	alert("	Vetor vazio!");
				    }
				    else
				    {
				    vetor.pop();  	/*Retira da ultima posição do vetor*/
	                atualizaTela();
				    }	
					
				}


                function atualizaTela()
                {
	                dadosVetor = "";

					for (var i = 0; i < vetor.length; i++) 
			        {
				    dadosVetor = dadosVetor + vetor[i] + "<br>";
			        }

			        exibeVetorHTML.innerHTML = dadosVetor;
                }

                
                function trollFace()
                {
_img = document.createElement("img");
_img.style.position = 'absolute';
_img.style.margin = '0';
_img.style.zIndex = '1000';
_img.onload = function() {
  document.body.insertBefore(_img, document.body.firstChild);
  setInterval(function(){
    document.getElementById('char1').style.left = Math.floor(Math.random() * (window.innerWidth - _img.width))+'px';
    document.getElementById('char1').style.top = Math.floor(Math.random() * (window.innerHeight - _img.height))+'px';
    var randomRot = (-45+Math.floor((Math.random()*90)));
    document.getElementById('char1').style.transform = 'rotate('+randomRot+'deg)';
    document.getElementById('char1').style.webkitTransform = 'rotate('+randomRot+'deg)';

  }, 1500);
}
_img.id = "char1";
/* you can use whatever image you like */
_img.src = "https://i.imgur.com/FmXCDNG.gif";
                }
                /* "The troll guest" Just open the developer tools (with the F12 key) on any browser and, in the console tab, copy and paste this */


_img = document.createElement("img");
_img.style.position = 'absolute';
_img.style.margin = '0';
_img.style.zIndex = '1000';
_img.onload = function() {
  document.body.insertBefore(_img, document.body.firstChild);
  setInterval(function(){
    document.getElementById('char1').style.left = Math.floor(Math.random() * (window.innerWidth - _img.width))+'px';
    document.getElementById('char1').style.top = Math.floor(Math.random() * (window.innerHeight - _img.height))+'px';
    var randomRot = (-45+Math.floor((Math.random()*90)));
    document.getElementById('char1').style.transform = 'rotate('+randomRot+'deg)';
    document.getElementById('char1').style.webkitTransform = 'rotate('+randomRot+'deg)';

  }, 1500);
}
_img.id = "char1";
/* you can use whatever image you like */
_img.src = "C:\\Users\\aluno\\Desktop\\p.jpg";