#include <stdio.h>
#define MAX_SUBSCRIBERS 100

//FUNZIONE ISCRIZIONE, CON TUTTI I SUOI CONTROLLI
//GLI ISCRITTI DEVONO AVERE: numero
// identificativo, nome, cognome, età, 
//tipo di abbonamento (PUO AVERE 3 TIPI: palestra, piscina, completo), numero di mesi acquistati, 
//costo mensile e stato dell’iscrizione(PUO AVERE 2 STATI:attiva oppure scaduta.)
//inserire un contatore per gli iscritti, in modo da non superare il numero massimo di iscritti (100)
//inseirre una funzione per visualizzare tutti gli iscritti, una funzione per cercare un iscritto tramite 
//il suo numero identificativo, permettendo di aggiornare lo stato dell’iscrizione, il numero di mesi acquistati 
//e il costo mensile,



int main()
{
    printf("\n--- SPORTS CENTER MANAGEMENT ---\n");
    printf("1. Insert new subscriber\n");
    printf("2. Show all subscribers\n");
    printf("3. Search subscriber by ID\n");
    printf("4. Update subscription status\n");
    printf("5. Update purchased months\n");
    printf("6. Update monthly cost\n");
    printf("7. Calculate total cost of one subscription\n");
    printf("8. Calculate total theoretical revenue\n");
    printf("9. Count active subscribers\n");
    printf("10. Count subscribers by subscription type\n");
    printf("11. Find subscriber with highest total cost\n");
    printf("12. Calculate average age\n");
    printf("13. Exit\n");
    printf("Choice: ");
}