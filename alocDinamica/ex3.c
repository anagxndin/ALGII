#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam;
    int par = 0, impar = 0;
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
        if (p[i]%2 == 0)
        {
            par++;
        } else
        {
            impar++;
        }
           
    }

    printf("Quantidade de numeros pares: %d\n", par);
    printf("Quantidade de numeros impares: %d\n", impar);
    
}
