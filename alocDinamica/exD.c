#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int *) malloc(sizeof(int));
    int *b = (int *) malloc(sizeof(int));

    if (a == NULL || b == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    scanf("%d", a);
    scanf("%d", b);

    int media_ponderada = ((*a * 4) + (*b * 6)) / 10;
    printf("%d\n", media_ponderada);

    free(a);
    free(b);

    return 0;
}
