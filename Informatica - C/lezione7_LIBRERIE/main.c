#include <stdio.h>
#include "math_utils.h"

int main() {
    int a = 5, b = 10;
    int somma = sum(a, b);
    int prodotto = product(a, b);

    printf("Sum: %d\n", somma);
    printf("Product: %d\n", prodotto);

    return 0;
}