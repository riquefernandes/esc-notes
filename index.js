let notas = []; // Vai a merda
let continuar = true;

while (continuar) {
  let entrada = prompt("Digite uma nota ou 'sair' para calcular a média:");

  if (entrada.toLowerCase() === "sair") {
    continuar = false;
  } else {
    let nota = parseFloat(entrada);

    if (!isNaN(nota)) {
      notas.push(nota);
    } else {
      alert("Por favor, digite um número válido."); 
    }
  }
}

if (notas.length > 0) {
  let soma = notas.reduce((total, n) => total + n, 0);
  let media = soma / notas.length;
  alert("A média das notas é: " + media.toFixed(2));
} else {
  alert("Nenhuma nota foi inserida.");
}
