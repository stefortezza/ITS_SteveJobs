#include <stdio.h>
// int maggioreDiTreNumeri(int a, int b, int c)
// {
//     int maggiore = a;

//     if (b > maggiore)
//     {
//         maggiore = b;
//     }
//     if (c > maggiore)
//     {
//         maggiore = c;
//     }

//     return maggiore;
// }

// int main(int a, int b, int c)
// {
//     printf("Inserisci il primo numero: ");
//     scanf("%d", &a);

//     printf("Inserisci il secondo numero: ");
//     scanf("%d", &b);

//     printf("Inserisci il terzo numero: ");
//     scanf("%d", &c);

//     int risultato = maggioreDiTreNumeri(a, b, c);

//     printf("Il numero maggiore e': %d\n", risultato);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Inserisci il primo numeor: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numeor: ");
    scanf("%d", &b);
    printf("Inserisci il terzo numeor: ");
    scanf("%d", &c);
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("Il numero maggiore e': %d\n", max);
    return 0;
}