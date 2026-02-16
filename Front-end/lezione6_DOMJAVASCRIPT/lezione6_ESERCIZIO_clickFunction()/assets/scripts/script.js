const addMovieModal = document.getElementById("add-modal");
const backdrop = document.getElementById("backdrop");
const cancelBtn = document.getElementById("cancelModale");
const addMovieBtn = document.querySelector("header button");

function openModal() {
  addMovieModal.classList.add("visible");
  backdrop.classList.add("visible");
}

function closeModal() {
  addMovieModal.classList.remove("visible");
  backdrop.classList.remove("visible");
}

addMovieBtn.addEventListener("click", openModal);
cancelBtn.addEventListener("click", closeModal);
backdrop.addEventListener("click", closeModal);
