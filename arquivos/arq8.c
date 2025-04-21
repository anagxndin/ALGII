#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    float preco, total = 0;

    arquivo = fopen("arq4.txt", "r+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%f", &preco) == 1) {
        total += preco;
    }

    fclose(arquivo);

    printf("O total da compra eh: %.2f\n", total);
    return 0;
}
