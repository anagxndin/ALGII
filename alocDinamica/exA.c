#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x = (int *) malloc(sizeof(int));
    int *y = (int *) malloc(sizeof(int));

    if (x == NULL || y == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    scanf("%d", x);
    scanf("%d", y);

    int soma = *x + *y;
    printf("%d\n", soma);

    free(x);
    free(y);

    return 0;
}