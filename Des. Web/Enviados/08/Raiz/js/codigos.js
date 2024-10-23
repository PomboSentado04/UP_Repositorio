console.log("O arquivo de script foi lido!");
var num1 = 10;
console.log("O valor de num1 é: " + num1 + ", e seu tipo é: " + typeof num1);

let num2 = 5;
var resultado = num1 + num2;
console.log(resultado);

function exibe(){
    alert("Você clicou no botão de alerta!");
    console.log("Você clicou no botão de alerta!");
}

function pede(){
    let nome = document.getElementById('nome').value;
    let comando = "<h1>o nome é: " + nome + "!</h1>"
    document. getElementById('contato_img').innerHTML = comando;
}