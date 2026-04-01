#include <stdio.h>

int sum(int a, int b);
int differenza(int a, int b);

void print_menu()
{
    printf("-------MENU-------\n");
    printf("1. Somma\n");
    printf("2. Differenza\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    printf("5. Esci\n");
}

int readChoice(char prompt[])
{
    int choice;
    printf("%s", prompt);
    scanf("%d", &choice);
    return choice;
}

int sum(int a, int b)
{
    return a + b;
}

int differenza(int a, int b)
{
    return a - b;
}

void validate_choice(int value)
{
    int value1 = readChoice("Inserisci il primo numero: ");
    int value2 = readChoice("Inserisci il secondo numero: ");
    int sumValue; 

    switch (value)
    {
    case 1:
        printf("Hai scelto Somma\n");
        sumValue = sum(value1, value2);
        printf("Risultato: %d\n", sumValue);
        break;
    case 2:
        printf("Hai scelto Differenza\n");
        sumValue = differenza(value1, value2);
        printf("Risultato: %d\n", sumValue);
        break;
    case 3:
        printf("Hai scelto Moltiplicazione\n");
        break;
    case 4:
        printf("Hai scelto Divisione\n");
        break;
    case 5:
        printf("Hai scelto Esci\n");
        break;
    default:
        printf("Scelta non valida\n");
        break;
    }
}

void loopChoice()
{
    int choice;
    do
    {
        choice = readChoice("Scegli un'opzione: ");
        validate_choice(choice);
    } while (choice != 5);
}

int findPosition(int array[], int lenght, int value){
    for (int i = 0; i < lenght; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    print_menu();

    // int choice = readChoice();
    // validate_choice(choice);

    loopChoice();

    int votes [] = {2, 5, 7, 3, 5, 9, 4, 6};
    int length = sizeof(votes) / sizeof(votes[0]);
    int idx = findPosition(votes, length, 3);
}