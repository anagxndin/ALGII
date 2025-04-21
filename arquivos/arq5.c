#include <stdio.h>

int main() {
    FILE *arquivo;
    int letras[26] = {0}; 
    char caractere;

    arquivo = fopen("arq2.txt", "r+");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    
    while ((caractere = fgetc(arquivo)) != EOF) {
        //POR TABELA ASCII
        //verifica se é uma letra maiúscula 
        if (caractere >= 'A' && caractere <= 'Z') {
            caractere = caractere + 32; // Converte para minúscula
        }
        //verifica se é uma letra minúscula
        if (caractere >= 'a' && caractere <= 'z') {
            letras[caractere - 'a']++; 
        }
    }

    fclose(arquivo);

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, letras[i]);
    }

    return 0;
}
