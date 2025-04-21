#include <stdio.h>
#include <stdlib.h>

int main() {
    int *tomadas = (int *) malloc(4 * sizeof(int));

    if (tomadas == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d", &tomadas[i]);
    }

    int total = tomadas[0] + tomadas[1] + tomadas[2] + tomadas[3] - 3;

    printf("%d\n", total);

    free(tomadas);
    return 0;
}
