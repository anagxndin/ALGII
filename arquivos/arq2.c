#include <stdio.h>

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
    FILE *arq2;
    char c;
    int contador = 0;

    arq2 = fopen("arq2.txt", "r");
    if (arq2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");
    while ((c = fgetc(arq2)) != EOF) {
        putchar(c); // Mostra o conteúdo sendo lido
        if (ehVogal(c)) {
            contador++;
        }
    }

    fclose(arq2);

    printf("\n\nO arquivo possui %d vogais.\n", contador);

    return 0;
}
