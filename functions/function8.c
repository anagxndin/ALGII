/* Crie uma função que recebe uma matriz com NxM posições como parâmetro e modifica os seus valores
pelo dobro do seu valor.
*/

#include <stdio.h>

void dobraValores(int N, int M, int matriz[N][M]){

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matriz[i][j] = matriz[i][j]*2;
        }   
    }

}

int main(){

    printf("Digite as dimensões da matriz: ");
    int M, N;
    scanf("%d %d", &N, &M);

    int m[N][M];

    printf("Insira os itens da matriz: ");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &m[i][j]);
        }
        
    }

    dobraValores(N, M, m);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n"); 
    }



}