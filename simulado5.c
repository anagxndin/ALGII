#include <stdio.h>

int main(){

    int m[3][3];
    int maior;
    int soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    
    maior = m[0][0];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] > maior)
        {
            maior = m[i][j];
        }
        soma += m[i][j];
        }
        
    }
    

    printf("Maior: %d\n", maior);
    printf("Soma: %d\n", soma);
    

    return 0;
}