#include <stdio.h>
int main()
{
    int a;
    printf("Inserisci un numero: ");
    scanf("%d", &a);
    int i = 0;
    while (i < a)
    {
        printf("%d\n", i * i);
        i++;
    }
    return 0;
}