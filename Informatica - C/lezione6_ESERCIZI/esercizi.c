// ESERCIZIO 1
// #include <stdio.h>

// int main()
// {
//     int minuti;
//     int costo;

//     printf("Inserisci minuti di sosta: ");
//     scanf("%d", &minuti);

//     if (minuti < 0)
//     {
//         printf("Errore: minuti negativi\n");
//     }
//     else if (minuti <= 30)
//     {
//         costo = 1;
//     }
//     else if (minuti <= 120)
//     {
//         costo = 3;
//     }
//     else
//     {
//         int extra = minuti - 120;
//         int ore_extra = extra / 60;

//         if (extra % 60 != 0)
//         {
//             ore_extra = ore_extra + 1;
//         }

//         costo = 3 + ore_extra;
//     }

//     if (minuti >= 0)
//     {
//         printf("Costo totale: %d euro\n", costo);
//     }

//     return 0;
// }

// ESERCIZIO 2
// #include <stdio.h>

// int main()
// {

//     double importo;
//     int premium;
//     int coupon;
//     int escluso;
//     double sconto = 0;
//     double prezzo;

//     printf("Importo: ");
//     scanf("%lf", &importo);

//     printf("Premium (0/1): ");
//     scanf("%d", &premium);

//     printf("Coupon valido (0/1): ");
//     scanf("%d", &coupon);

//     printf("Prodotto escluso (0/1): ");
//     scanf("%d", &escluso);

//     if (escluso == 1)
//     {

//         if (premium == 1 && importo >= 150)
//         {
//             prezzo = importo - 10;
//         }
//         else
//         {
//             prezzo = importo;
//         }
//     }
//     else
//     {

//         if (premium == 1 && importo >= 100)
//         {
//             sconto = 15;
//         }
//         else if (importo >= 200)
//         {
//             sconto = 10;
//         }
//         else if (importo >= 100)
//         {
//             sconto = 5;
//         }

//         if (coupon == 1)
//         {
//             sconto = sconto + 5;
//         }

//         if (sconto > 20)
//         {
//             sconto = 20;
//         }

//         prezzo = importo - (importo * sconto / 100);
//     }

//     if (prezzo < 0)
//     {
//         prezzo = 0;
//     }

//     printf("Prezzo finale: %.2f\n", prezzo);

//     return 0;
// }

// ESERCIZIO 3
// #include <stdio.h>

// int main()
// {

//     int numero;
//     int somma = 0;
//     int count = 0;
//     int positivi = 0;
//     int negativi = 0;

//     printf("Inserisci numeri (0 per terminare):\n");
//     scanf("%d", &numero);

//     while (numero != 0)
//     {

//         somma = somma + numero;
//         count++;

//         if (numero > 0)
//             positivi++;
//         else
//             negativi++;

//         scanf("%d", &numero);
//     }

//     printf("Numeri inseriti: %d\n", count);
//     printf("Somma: %d\n", somma);
//     printf("Positivi: %d\n", positivi);
//     printf("Negativi: %d\n", negativi);

//     return 0;
// }

// // ESERCIZIO 4
// // #include <stdio.h>

// // int main()
// // {

// //     int N;
// //     int valore;
// //     int i = 0;
// //     int somma = 0;
// //     int min, max;
// //     int sopra18 = 0;

// //     printf("Inserisci N (1-50): ");
// //     scanf("%d", &N);

// //     while (N < 1 || N > 50)
// //     {
// //         printf("Errore, reinserisci N: ");
// //         scanf("%d", &N);
// //     }

// //     while (i < N)
// //     {

// //         printf("Inserisci valore (0-30): ");
// //         scanf("%d", &valore);

// //         if (valore < 0 || valore > 30)
// //         {
// //             printf("Valore non valido\n");
// //             continue;
// //         }

// //         if (i == 0)
// //         {
// //             min = valore;
// //             max = valore;
// //         } 

// //         if (valore < min)
// //             min = valore;
// //         if (valore > max)
// //             max = valore;

// //         if (valore >= 18)
// //             sopra18++;

// //         somma += valore;
// //         i++;
// //     }

// //     double media = (double)somma / N;

// //     printf("Media: %.2f\n", media);
// //     printf("Min: %d\n", min);
// //     printf("Max: %d\n", max);
// //     printf(">=18: %d\n", sopra18);

// //     return 0;
// // }

// ESERCIZIO 5
#include <stdio.h>

int is_even(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}

int abs_int(int x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

int max2(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{

    int a, b;

    printf("Inserisci due numeri: ");
    scanf("%d %d", &a, &b);

    printf("A PARI?: %d\n", is_even(a));
    printf("B PARI?: %d\n", is_even(b));

    printf("Assoluto a: %d\n", abs_int(a));
    printf("Assoluto b: %d\n", abs_int(b));

    printf("Massimo: %d\n", max2(a, b));

    return 0;
}

// ESERCIZIO 6
// #include <stdio.h>

// int main()
// {

//     int n;
//     int a[30];

//     printf("N: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Array originale:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         int temp = a[i];
//         a[i] = a[n - 1 - i];
//         a[n - 1 - i] = temp;
//     }

//     printf("\nArray invertito:\n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// ESERCIZIO 7
// #include <stdio.h>

// int main()
// {

//     int n;
//     int a[50];
//     int b[50];
//     int nuova = 0;

//     printf("N: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {

//         int trovato = 0;

//         for (int j = 0; j < nuova; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 trovato = 1;
//             }
//         }

//         if (trovato == 0)
//         {
//             b[nuova] = a[i];
//             nuova++;
//         }
//     }

//     printf("Array senza duplicati:\n");

//     for (int i = 0; i < nuova; i++)
//     {
//         printf("%d ", b[i]);
//     }

//     printf("\nNuova lunghezza: %d", nuova);

//     return 0;
// }
