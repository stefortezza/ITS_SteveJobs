#include <stdio.h>
#define N 2

void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}

void readArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &array[i]);
    }
}

int summarize(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum;
}

float avg(int sum, float elements)
{
    return sum / elements;
}

int searchArrayLenght (){
    int dim;
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &dim);
    return dim;
}

int main()
{
    // int votes[] = {2,3,1,0,3,5,5,6};
    // int length = sizeof(votes)/sizeof(votes[0]);
    int lenghtArray = searchArrayLenght();
    int votes[lenghtArray];

    votes[0] = 1;
    printf("Il primo voto e': %d\n", votes[0]);
    readArray(votes, lenghtArray);
    printArray(votes, lenghtArray);

    int sum = summarize(votes, lenghtArray);

    printf("La somma dei voti e': %d\n", sum);

    float average = avg(sum, lenghtArray);
    printf("La media dei voti e': %.2f\n", average);
}
