#include <stdio.h>
#include <stdlib.h>

int ehVogal(char c) {
    char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < 10; i++) {
        if (c == vogais[i]) {
            return 1;  
        }
    }
    return 0;  
}

int main() {
    FILE *entrada, *saida;
    char c;

    entrada = fopen("arq2.txt", "r+");
    if (entrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    saida = fopen("saida.txt", "w+");
    if (saida == NULL) {
        perror("Erro ao criar o arquivo de saída");
        fclose(entrada);
        return 1;
    }

    while ((c = fgetc(entrada)) != EOF) {
        if (ehVogal(c)) {
            fputc('*', saida);
        } else {
            fputc(c, saida);
        }
    }

    fclose(entrada);
    fclose(saida);

    printf("Arquivo 'saida.txt' criado com sucesso.\n");
    return 0;
}
