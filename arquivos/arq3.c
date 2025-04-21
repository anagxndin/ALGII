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

int ehLetra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
    FILE *arq2;
    char c;
    int vogais = 0;
    int consoantes = 0;

    arq2 = fopen("arq2.txt", "r");
    if (arq2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((c = fgetc(arq2)) != EOF) {
        putchar(c);
        if (ehLetra(c)) {
            if (ehVogal(c)) {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    fclose(arq2);

    printf("\n\nO arquivo possui %d vogais e %d consoantes.\n", vogais, consoantes);

    return 0;
}
