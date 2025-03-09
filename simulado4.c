#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    int vetor[N];
    int maior = vetor[0], soma = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
      
    }

    for (int i = 0; i < N; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        soma += vetor[i];
    }
    

    printf("Maior: %d\n", maior);
    printf("Soma: %d\n", soma);
    


    return 0;
}