var prezzi = [5, 8, 7, 12, 3, 17, 20];
var somma = 0;
var media = 0;

prezzi.forEach((prezzo) => {
  somma += prezzo;
});

console.log(somma);


prezzi.forEach(prezzo => {
  media += prezzo / prezzi.length;
});

console.log(media);

// for (let index = 0; index < prezzi.length; index++) {
//   const element = prezzi[index];
//   somma = element + element;
//   console.log(somma);
// }
