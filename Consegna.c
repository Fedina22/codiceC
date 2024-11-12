#include <stdio.h>
int main ()
{
    int primo;
    int secondo;
    int risultato;
    float media; 

    printf("\ninserisci primo numero: ");
    scanf("%d", &primo);

    printf("\nInserisci secondo numero: ");
    scanf("%d", &secondo);

    risultato = primo + secondo;
    media = (float)risultato /2;

    printf("la media è: %.2f\n", media);

    return 0;
}