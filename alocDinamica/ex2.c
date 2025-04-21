#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam;
    printf ("Tamanho do  vetor: ");
    scanf("%d", &tam);
    int *p;
    p = (int *) malloc(tam*sizeof(int));

    printf("Insira os numeros no vetor: ");
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        printf(" %d ", p[i]);
    }

}