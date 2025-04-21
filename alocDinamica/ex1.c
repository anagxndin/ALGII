#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *) malloc(5*sizeof(int));

    if (p == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Insira os numeros no vetor: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);
       
}