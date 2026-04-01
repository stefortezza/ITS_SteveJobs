#include <stdio.h>
#include <string.h>

#define MAX_PRODOTTI 100

typedef struct {
    int id;
    char nome[100];
    float prezzo;
    int quantitaDisponibile;
    int contatore;
} Prodotto;

void menu(int scelta, Prodotto prodotti[], int *numProdotti);
void aggiungiProdotto(Prodotto prodotti[], int *numProdotti);
void visualizzaProdotti(Prodotto prodotti[], int numProdotti);
void ricercaProdotto(Prodotto prodotti[], int numProdotti);
void aggiornaProdotto(Prodotto prodotti[], int numProdotti);
void registraVendita(Prodotto prodotti[], int numProdotti);

void menu(int scelta, Prodotto prodotti[], int *numProdotti) {
    switch (scelta) {
        case 1:
            aggiungiProdotto(prodotti, numProdotti);
            break;
        case 2:
            visualizzaProdotti(prodotti, *numProdotti);
            break;
        case 3:
            ricercaProdotto(prodotti, *numProdotti);
            break;
        case 4:
            aggiornaProdotto(prodotti, *numProdotti);
            break;
        case 5:
            registraVendita(prodotti, *numProdotti);
            break;
        case 6:
            printf("\nUscita dal programma.\n");
            break;
        default:
            printf("\nScelta non valida.\n");
    }
}

void aggiungiProdotto(Prodotto prodotti[], int *numProdotti) {
    if (*numProdotti >= MAX_PRODOTTI) {
        printf("\nLimite massimo di prodotti raggiunto.\n");
        return;
    }

    Prodotto nuovo;

    printf("\n--- AGGIUNTA PRODOTTO ---\n");

    nuovo.id = *numProdotti;

    printf("Nome: ");
    scanf("[^\n]", nuovo.nome);  

    printf("Prezzo: ");
    scanf("%f", &nuovo.prezzo);

    printf("Quantità disponibile: ");
    scanf("%d", &nuovo.quantitaDisponibile);

    nuovo.contatore = 0;

    prodotti[*numProdotti] = nuovo;
    (*numProdotti)++;

    printf("\nProdotto aggiunto! ID assegnato: %d\n", nuovo.id);
}

void visualizzaProdotti(Prodotto prodotti[], int numProdotti) {
    if (numProdotti == 0) {
        printf("\nNessun prodotto disponibile.\n");
        return;
    }

    printf("\n%-5s %-20s %-10s %-12s %-10s\n",
           "ID", "Nome", "Prezzo", "Quantità", "Vendite");

    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < numProdotti; i++) {
        printf("%-5d %-20s %-10.2f %-12d %-10d\n",
               prodotti[i].id,
               prodotti[i].nome,
               prodotti[i].prezzo,
               prodotti[i].quantitaDisponibile,
               prodotti[i].contatore);
    }
}

void ricercaProdotto(Prodotto prodotti[], int numProdotti) {
    int id;

    printf("\n--- RICERCA PRODOTTO ---\n");
    printf("Inserisci ID: ");
    scanf("%d", &id);

    for (int i = 0; i < numProdotti; i++) {
        if (prodotti[i].id == id) {
            printf("\nProdotto trovato:\n");
            printf("------------------------\n");
            printf("ID: %d\n", prodotti[i].id);
            printf("Nome: %s\n", prodotti[i].nome);
            printf("Prezzo: %.2f\n", prodotti[i].prezzo);
            printf("Quantità: %d\n", prodotti[i].quantitaDisponibile);
            printf("Vendite: %d\n", prodotti[i].contatore);
            return;
        }
    }

    printf("\nProdotto non trovato.\n");
}

void aggiornaProdotto(Prodotto prodotti[], int numProdotti) {
    int id;

    printf("\n--- AGGIORNA PRODOTTO ---\n");
    printf("Inserisci ID: ");
    scanf("%d", &id);

    for (int i = 0; i < numProdotti; i++) {
        if (prodotti[i].id == id) {
            printf("\nNuovo prezzo: ");
            scanf("%f", &prodotti[i].prezzo);

            printf("Nuova quantità: ");
            scanf("%d", &prodotti[i].quantitaDisponibile);

            printf("\nProdotto aggiornato con successo!\n");
            return;
        }
    }

    printf("\nProdotto non trovato.\n");
}

void registraVendita(Prodotto prodotti[], int numProdotti) {
    int id;

    printf("\n--- REGISTRA VENDITA ---\n");
    printf("Inserisci ID: ");
    scanf("%d", &id);

    for (int i = 0; i < numProdotti; i++) {
        if (prodotti[i].id == id) {
            if (prodotti[i].quantitaDisponibile > 0) {
                prodotti[i].quantitaDisponibile--;
                prodotti[i].contatore++;
                printf("\nVendita registrata!\n");
            } else {
                printf("\nProdotto esaurito.\n");
            }
            return;
        }
    }

    printf("\nProdotto non trovato.\n");
}

int main() {
    Prodotto prodotti[MAX_PRODOTTI];
    int numProdotti = 0;
    int scelta;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Aggiungi prodotto\n");
        printf("2. Visualizza prodotti\n");
        printf("3. Cerca prodotto\n");
        printf("4. Aggiorna prodotto\n");
        printf("5. Registra vendita\n");
        printf("6. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        menu(scelta, prodotti, &numProdotti);

    } while (scelta != 6);

    return 0;
}