const api = "https://jsonplaceholder.typicode.com/";

fetch(`${api}users`)
  .then((response) => response.json())
  .then((users) => {
    const userList = document.getElementById("users");
    users.forEach((user) => {
      const userElement = document.createElement("div");
      userElement.innerHTML = `<h2>${user.name}</h2><p>${user.email}</p>`;
      userList.appendChild(userElement);
    });
  })
  .catch((error) => {
    userList.innerHTML = "<p>Errore nel caricamento degli utenti</p>";
    console.error("Errore nel caricamento degli utenti:", error);
  });
