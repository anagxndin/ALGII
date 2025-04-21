#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int *) malloc(sizeof(int));
    int *b = (int *) malloc(sizeof(int));

    if (a == NULL || b == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    scanf("%d", a);
    scanf("%d", b);

    if (*a < 1 || *a > 1000 || *b < 1 || *b > 1000) {
        printf("Valores invalidos. Devem estar entre 1 e 1000.\n");
    } else {
        int area = (*a) * (*b);
        printf("%d\n", area);
    }

    free(a);
    free(b);

    return 0;
}
