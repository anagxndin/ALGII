#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int nota, maiorNota;

    arquivo = fopen("arq5.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    if (fscanf(arquivo, "%d", &nota) == 1) {
        maiorNota = nota;
    } else {
        printf("Arquivo vazio.\n");
        fclose(arquivo);
        return 1;
    }

    while (fscanf(arquivo, "%d", &nota) == 1) {
        if (nota > maiorNota) {
            maiorNota = nota;
        }
    }

    fclose(arquivo);

    printf("A maior nota é: %d\n", maiorNota);
    return 0;
}
