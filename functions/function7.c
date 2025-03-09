/*Crie uma função que recebe um vetor com N posições como parâmetro e retorna o maior número do vetor.
*/

#include <stdio.h>

int retornaMaior(int N, int vetor[N]){

    int maior = vetor[0];
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        
    }

    return maior;
    

}

int main(){
    int N;
  
    printf("Quantos valores? ");
    scanf("%d", &N);

    int vetor[N];

    printf("Digite os valores: ");

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int mv = retornaMaior(N, vetor);
    printf("O maior valor do vetor eh %d\n", mv);
    



}