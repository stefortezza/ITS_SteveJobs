#include <stdio.h>

// int main()
// {
//     int a = 5;
//     int b = 5;

//     if (a > b)
//     {
//         printf("a = %d e` piu grande di b = %d\n", a, b);
//     }
//     else if (a = b)
//     {
//         printf("a = %d  e` uguale a b = %d\n", a, b);
//     }
//     else
//     {
//         printf("a = %d non e` piu grande di b = %d\n", a, b);
//     }
//     return 0;
// }

int main()
{
    int a = 12;
    int b = 11;
    int max;

    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    printf("Il numero massimo e` %d", max);
    return 0;
}