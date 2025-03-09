/*Crie uma função que recebe um vetor com N posições como parâmetro e modifica os seus valores pelo
dobro do seu valor.

Na linguagem C, os parâmetros de uma função são sempre passados por valor,
ou seja, uma cópia do valor do parâmetro é feita e passada para a função.
● Mesmo que esse valor mude dentro da função, nada acontece com o valor de
fora da função.

No caso de ponteiros e vetores, como a função recebe o endereço de memória, modificações feitas nos dados referenciados pelo ponteiro afetam o valor original, permitindo "simular" a passagem por referência.
*/

#include <stdio.h>

void dobraValores(int x, double vetorF[x]){

    for (int i = 0; i < x; i++)
    {
        vetorF[i] = vetorF[i]*2;
    }
    

    printf("Vetor dentro da função: ");
    for (int i = 0; i < x; i++)
    {
        printf("%1.lf; ", vetorF[i]);
    }
    
}


int main(){
    int N;
    printf("Quantos valores? ");
    scanf("%d", &N);
    double vetor[N];
    printf("Digite os valores: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &vetor[i]);
    }
    
    printf("Vetor antes da função: ");
    for (int i = 0; i < N; i++)
    {
        printf("%1.lf; ", vetor[i]);
    }
    
    dobraValores(N, vetor);

    printf("Vetor depois da função: ");
    for (int i = 0; i < N; i++)
    {
        printf("%.1lf; ", vetor[i]);
    }



}