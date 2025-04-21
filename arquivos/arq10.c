#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivoA, *arquivoB, *arquivoC;
    int a, b;
    int bValues[100];  
    int countB = 0;

    arquivoA = fopen("a.txt", "r");
    arquivoB = fopen("b.txt", "r");
    arquivoC = fopen("c.txt", "w");

    if (arquivoA == NULL || arquivoB == NULL || arquivoC == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    while (fscanf(arquivoB, "%d", &b) == 1) {
        bValues[countB++] = b;
    }

    rewind(arquivoB);

    while (fscanf(arquivoA, "%d", &a) == 1) {
        for (int i = 0; i < countB; i++) {
            int soma = a + bValues[i];
            printf("%d + %d = %d\n", a, bValues[i], soma);
            fprintf(arquivoC, "%d + %d = %d\n", a, bValues[i], soma);
        }
    }

    fclose(arquivoA);
    fclose(arquivoB);
    fclose(arquivoC);

    return 0;
}
