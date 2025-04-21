#include <stdio.h>
#include <stdlib.h>

int main() {
    double *a = (double *) malloc(sizeof(double));
    double *b = (double *) malloc(sizeof(double));

    if (a == NULL || b == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    scanf("%lf", a);
    scanf("%lf", b);

    if (*b == 0) {
        printf("Divisao por zero nao permitida.\n");
    } else {
        double resultado = *a / *b;
        printf("%.2lf\n", resultado);
    }

    free(a);
    free(b);

    return 0;
}
