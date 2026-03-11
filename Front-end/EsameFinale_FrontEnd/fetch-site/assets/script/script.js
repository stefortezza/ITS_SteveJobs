const api = "https://jsonplaceholder.typicode.com/";

fetch(`${api}users`)
  .then((response) => response.json())
  .then((users) => {
    const userList = document.getElementById("users");
    users.forEach((user) => {
      const userCard = document.createElement("div");
      userCard.classList.add("user-card");
      userCard.innerHTML = `<h2>${user.name}</h2><p>${user.email}</p>`;
      userList.appendChild(userCard);
    });
  })
  .catch((error) => {
    const userList = document.getElementById("users");
    userList.innerHTML = "<p>Errore nel caricamento degli utenti</p>";
    console.error("Errore:", error);
  });

const button = document.getElementById("changeColor");
button.addEventListener("click", () => {
  const cards = document.querySelectorAll(".user-card");
  cards.forEach((card) => {
    card.style.backgroundColor = "#e609ea";
  });
});

function changeColor() {
  const cards = document.querySelectorAll(".user-card");
  cards.forEach((card) => {
    card.style.backgroundColor = "#09ea90";
  });
}
