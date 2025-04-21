#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam;
    
    printf("Digite a quantidade de valores a serem armazenados: ");
    scanf("%d", &tam);

    double *p;
    p = (double *) malloc(tam*sizeof(double));

    printf("Insira os valores: ");
    for (int i = 0; i < tam; i++)
    {
        scanf("%lf", &p[i]);
    }

    double maior = p[0];

    for (int i = 0; i < tam; i++)
    {
        if (p[i] > maior)
        {
            maior = p[i];
        } 
    }

    printf("O maior valor entre as posicoes eh: %.1lf\n", maior);

    p = realloc(p, 3*sizeof(double));
    maior = p[0];

    for (int i = 0; i < 3; i++)
    {
        if (p[i] > maior)
        {
            maior = p[i];
        } 
    }

    printf("O maior valor entre 3 posicoes eh: %.1lf\n", maior);

}