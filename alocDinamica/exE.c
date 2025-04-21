#include <stdio.h>
#include <stdlib.h>

int main() {
    int *lado = (int *) malloc(sizeof(int));

    if (lado == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    scanf("%d", lado);

    if (*lado < 1 || *lado > 1000) {
        printf("Valor inválido. O lado deve estar entre 1 e 1000.\n");
    } else {
        int area = (*lado) * (*lado);
        printf("%d\n", area);
    }

    free(lado);

    return 0;
}
