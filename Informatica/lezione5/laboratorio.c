#include <stdio.h>

int sum (int a, int b) {
    return a + b;
}

void printSomething(char prompt[]) {
    printf("%s\n", prompt);
}

//SENZA IL RETURN NON CAMBIA IL VALORE DI VALUE, PERCHE' LA VARIABILE X E' UNA COPIA DI VALUE, QUINDI QUANDO LA MODIFICO
//NON MODIFICO VALUE
void tryChange(int x){
    x = 12345;
}

//CON IL RETURN CAMBIO IL VALORE DI VALUE, PERCHE' RITORNO IL NUOVO VALORE E LO ASSEGNO A VALUE, QUINDI VALUE ASSUME IL NUOVO VALORE
int tryChangeSuperSayan (int x){
    x = 12345;
    return x;
}

int main() {
    int value = 10;
    printf("Value before change: %d\n", value);
    tryChange(value);
    value = tryChangeSuperSayan(value);
    printf("Value after change: %d\n", value);
    // printSomething("Inserisci due valori interi:");
    // int mySum = sum (100, 20);
    // printf("La somma e': %d\n", mySum);
}
