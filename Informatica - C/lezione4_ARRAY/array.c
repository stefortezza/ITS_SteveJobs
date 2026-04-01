#include <stdio.h>
#include <math.h>
// #define N 10
#define SIZE 10

int main()
{
    int a[SIZE], i;

    printf("Inserisci %d numeri:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("Inserisci il %d elemento: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nIn ordine inverso:");
    for (i = SIZE - 1; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}

#define NUM_TASSI 6

int main()
{
    int capitaleIniziale = 100;
    float tassoBase;
    int numeroAnni;
    float tassi[NUM_TASSI];
    float risultato;

    printf("Inserisci il tasso base di interesse (es. 5 per 5%%): ");
    scanf("%f", &tassoBase);

    printf("Inserisci il numero di anni: ");
    scanf("%d", &numeroAnni);

    for (int i = 0; i < 6; i++)
    {
        tassi[i] = tassoBase + i;
    }

    printf("\n%-6s", "Anni");
    for (int i = 0; i < NUM_TASSI; i++)
    {
        printf("%8.1f%%", tassi[i]);
    }
    printf("\n");
    for (int i = 0; i < 6 + NUM_TASSI * 8; i++)
        printf("-");
    printf("\n");

    for (int anno = 1; anno <= numeroAnni; anno++)
    {
        printf("%-6d", anno);

        for (int i = 0; i < 6; i++)
        {
            risultato = capitaleIniziale * pow(1 + tassi[i] / 100, anno);
            printf("%8.2f", risultato);
        }
        printf("\n");
    }

    return 0;
}

// ESERCIZIO: Scrivere un programma che stampi una tabella che mostra gli interessi che derivano dalla
// somma di $100 investiti a vari tassi e per vari periodi. L'utente inserirà il tasso di interesse e il numero di anni.
// La tabella mostrerà il valore della somma iniziale dopo un numero di anni che varia da 1 al numero di anni inseriti e per vari tassi di interesse.
// Assumendo che la capitalizzazione avvegna ogni anno.

int main()
{
    float capitale = 100.0;
    float tasso;
    int numeroAnni;

    printf("Inserisci il tasso di interesse (es. 5 per 5%%): ");
    scanf("%f", &tasso);

    printf("Inserisci il numero di anni: ");
    scanf("%d", &numeroAnni);

    printf("\nEvoluzione del capitale con interesse composto\n");
    printf("----------------------------------------------\n");

    printf("Anno %d: %.2f\n", 0, capitale);

    for (int anno = 1; anno <= numeroAnni; anno++)
    {
        capitale *= (1 + tasso / 100);
        printf("Anno %d: %.2f\n", anno, capitale);
    }

    return 0;
}


//ESERCIZIO UTILIZZANDO UNA FUNZIONE E RICHIAMARLA SUL MAIN.
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int sumTotal;
    int num1, num2;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    sumTotal = sum(num1, num2);
    printf("La somma e`: %d\n", sumTotal);

}