function toggleColor() {
  const box = document.querySelector(".color"); //seeziono il primo elemento del DOM con la classe color e lo salva nella va
  if (!box) return; // se box non esiste (null o undefined), esce dalla funzione
  box.classList.toggle("active"); //toglie o qggiunge la classer active all'elemento box
}

//Espone la funzione in modo che l'onclick inline possa invocarla
window.toggleColor = toggleColor; //rende la funzioen accessibile globalmente

// Window e` l'oggetto globale del browser che rappresenta la finestra/scheda corrente.

// Scopo globale:
//la proprieta` di window sono accessibili ovunque'
// se definisci window.toggleColor, puoi chiamare toggleColor() anche da html inline (onclick="tiggleColor()") e dalla console.
// Inline handler: gli attributi HTML come onclick cercano funzioni su window; esporla li garantisce che il nome sia risolto.
