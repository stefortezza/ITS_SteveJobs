#include <stdio.h>

// 3. Leggere tre numeri interi e determinare il maggiore.
//  int main()
//  {
//      int a, b, c, max;
//      printf("Inserisci il primo numero: ");
//      scanf("%d", &a);
//      printf("Inserisci il secondo numero: ");
//      scanf("%d", &b);
//      printf("Inserisci il terzo numero: ");
//      scanf("%d", &c);
//      if (a >= b && a >= c)
//      {
//          max = a;
//      }
//      else if (b >= a && b >= c)
//      {
//          max = b;
//      }
//      else
//      {
//          max = c;
//      }
//      printf("Il numero maggiore e': %d\n", max);
//      return 0;
//  }

// 4. Leggere un numero intero e verificare se è pari o dispari.
//  int main()
//  {
//      int a;
//      printf("Inserisci il primo numero: ");
//      scanf("%d", &a);
//      if (a%2 == 0)
//      {
//          printf("Il numero e' pari.\n");
//      }
//      else
//      {
//          printf("Il numero e' dispari.\n");
//      }
//      return 0;
//  }

// 5. Leggere l’età di una persona e stampare se è minorenne, maggiorenne o anziano (≥ 65).
//  int main()
//  {
//      int eta;
//      printf("Inserisci la tua eta': ");
//      scanf("%d", &eta);
//      if (eta < 18)
//      {
//          printf("Sei minorenne.\n");
//      }
//      else if (eta >= 18 && eta < 65)
//      {
//          printf("Sei maggiorenne.\n");
//      }
//      else
//      {
//          printf("Sei anziano.\n");
//      }
//      return 0;
//  }

// 11. Stampare i numeri da 1 a 10 usando un ciclo for.
//  int main (){
//      for(int i=1; i<=10; i++){
//          printf("%d\n", i);
//      }
//  }

// 12. Stampare i numeri da 10 a 1 in ordine decrescente.
//  int main(){
//      for( int i=10; i>=1; i--){
//          printf("%d\n", i);
//      }
//  }

// 13. Stampare tutti i numeri pari da 1 a 100.
//  int main()
//  {
//      for (int i = 2; i <= 100; i += 2)
//      {
//          printf("%d\n", i);
//      }
//  }

// 14. Calcolare la somma dei numeri da 1 a N (N letto da input).
// int main() {
//     int n;
//     int somma = 0;

//     printf("Inserisci un numero: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         somma = somma + i;
//     }

//     printf("%d\n", somma);
//     return 0;
// }

// 15. Calcolare il prodotto dei numeri da 1 a N (fattoriale).
//  int main() {
//      int n;
//      int multiplo = 1;

//     printf("Inserisci un numero: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         multiplo = multiplo * i;
//         }

//     printf("%d\n", multiplo);
//     return 0;
// }

// 16. Stampare la tabellina di un numero dato in input.
// int main()
// {
//     int n;
//     printf("Inserisci un numero: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d")
//     }
// }

// 21. Leggere numeri finché l’utente inserisce 0, poi stampare la somma dei numeri inseriti.
// int main()
// {
//     int n;
//     int somma = 0;

//     do
//     {
//         printf("Inserisci un numero (0 per terminare): ");
//         scanf("%d", &n);

//         somma += n;

//     } while (n != 0);

//     printf("La somma dei numeri inseriti e': %d\n", somma);
//     return 0;
// }

// 21.(VERSIONE DOCENTE) Leggere numeri finché l’utente inserisce 0, poi stampare la somma dei numeri inseriti.
// int main()
// {
//     int n;
//     int somma = 0;

//     printf("Inserisci un numero che sia un intero positivo: ");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         somma += n;
//         printf("Inserisci un numero (0 per terminare): ");
//         scanf("%d", &n);
//     }
//     printf("La somma dei numeri inseriti e': %d\n", somma);
//     return 0;
// }

// 22. Leggere numeri finché l’utente inserisce un numero negativo, poi stampare il massimo.
// int main()
// {
//     int n;
//     int max = 0;

//     do
//     {
//         printf("Inserisci un numero positivo (negativo per terminare): ");
//         scanf("%d", &n);

//         if (n >= 0 && n > max)
//         {
//             max = n;
//         }

//     } while (n >= 0);

//     printf("Il massimo inserito e': %d\n", max);

//     return 0;
// }

// 23. Contare quante cifre ha un numero intero positivo.
int main()
{
    int numero = 0;
    int contatore = 0;
    printf("Inserisci un numero positivo: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Il numero deve essere positivo.\n");
        return 0;
    }

    do
    {
        contatore++;
        numero = numero / 10;
    } while (numero != 0);

    printf("Il numero %d ha %d cifre.\n", numero, contatore);
    return 0;
}

// 24. Invertire un numero intero (es. 123 → 321).
int main()
{
    int numero = 0;
    int invertito = 0;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        int cifra = numero % 10;
        invertito = invertito * 10 + cifra;
        numero = numero / 10;
    }

    printf("Il numero invertito e': %d\n", invertito);
    return 0;
}

// 25. Calcolare la somma delle cifre di un numero.
int main()
{
    int numero = 0;
    int somma = 0;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    int numero = numero;
    while (numero != 0)
    {
        somma = somma + (numero % 10);
        numero = numero / 10;
    }

    printf("La somma delle cifre di %d e': %d\n", numero, somma);
    return 0;
}

// 26. Leggere numeri finché l'utente inserisce un numero pari.
int main()
{
    int numero;

    do
    {
        printf("Inserisci un numero (deve essere pari per terminare): ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("Hai inserito un numero pari. Programma terminato.\n");
            break;
        }

    } while (1);

    return 0;
}

// 27. Verificare se un numero è palindromo.
int main()
{
    int numero = 0;
    int originale = 0;
    int invertito = 0;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    originale = numero;
    while (numero != 0)
    {
        int cifra = numero % 10;
        invertito = invertito * 10 + cifra;
        numero = numero / 10;
    }

    if (originale == invertito)
    {
        printf("Il numero %d e' palindromo.\n", originale);
    }
    else
    {
        printf("Il numero %d non e' palindromo.\n", originale);
    }

    return 0;
}

// 28. Stampare i numeri da 1 a N usando while.
int main()
{
    int n = 1;
    int i = 1;
    printf("Inserisci N: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}

// 29. Chiedere all'utente una password finché non è corretta.
int main()
{
    int password_corretta = 1234;
    int password_inserita;

    do
    {
        printf("Inserisci la password (4 cifre): ");
        scanf("%d", &password_inserita);

        if (password_inserita == password_corretta)
        {
            printf("Accesso consentito!\n");
            break;
        }
        else
        {
            printf("Password errata. Riprova.\n");
        }

    } while (1);

    return 0;
}

// 30. Stampare la tabellina di un numero usando do while.
int main()
{
    int numero = 1;
    int i = 1;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    printf("Tabellina del %d:\n", numero);
    do
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    } while (i <= 10);

    return 0;
}

// 33. Calcolare il massimo comune divisore (MCD) di due numeri
int main()
{
    int a;
    int b;
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    printf("MCD(%d, %d) = %d\n", a, b, a);
    return 0;
}

// 39. Simulare un menu con più opzioni usando un ciclo
int main()
{
    int scelta;
    
    do {
        printf("\n=== MENU ===\n");
        printf("1. Saluta\n");
        printf("2. Somma due numeri\n");
        printf("3. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);
        
        switch(scelta) {
            case 1:
                printf("Ciao! Come stai?\n");
                break;
                
            case 2: {
                int a, b;
                printf("Inserisci il primo numero: ");
                scanf("%d", &a);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &b);
                printf("La somma e': %d\n", a + b);
                break;
            }
                
            case 3:
                printf("Arrivederci!\n");
                break;
                
            default:
                printf("Scelta non valida. Riprova.\n");
        }
        
    } while (scelta != 3);
    
    return 0;
}

// 40. Simulare un bancomat (deposito, prelievo, saldo)
int main()
{
    float saldoIniziale = 1000.0;
    int scelta;
    
    do {
        printf("\n=== BANCOMAT ===\n");
        printf("saldoIniziale attuale: €%.2f\n", saldoIniziale);
        printf("1. Deposita\n");
        printf("2. Preleva\n");
        printf("3. Visualizza saldoIniziale\n");
        printf("4. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);
        
        switch(scelta) {
            case 1: {
                float importo;
                printf("Importo da depositare: ");
                scanf("%f", &importo);
                
                if (importo > 0) {
                    saldoIniziale = saldoIniziale + importo;
                    printf("Deposito effettuato.\n");
                } else {
                    printf("Importo non valido.\n");
                }
                break;
            }
                
            case 2: {
                float importo;
                printf("Importo da prelevare: ");
                scanf("%f", &importo);
                
                if (importo > 0 && importo <= saldoIniziale) {
                    saldoIniziale = saldoIniziale - importo;
                    printf("Prelievo effettuato.\n");
                } else if (importo > saldoIniziale) {
                    printf("Fondi insufficienti.\n");
                } else {
                    printf("Importo non valido.\n");
                }
                break;
            }
                
            case 3:
                printf("Il tuo saldoIniziale e': €%.2f\n", saldoIniziale);
                break;
                
            case 4:
                printf("Grazie per aver usato il nostro bancomat. Arrivederci!\n");
                break;
                
            default:
                printf("Scelta non valida.\n");
        }
        
    } while (scelta != 4);
    
    return 0;
}