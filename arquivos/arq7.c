#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char palavra[50], palavraArquivo[50];
    int contador = 0;

    printf("Digite a palavra a ser buscada: ");
    scanf("%s", palavra);

    arquivo = fopen("arq3.txt", "r+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%s", palavraArquivo) == 1) {
        //remove o ponto final
        int len = strlen(palavraArquivo);
        if (palavraArquivo[len - 1] == '.') {
            palavraArquivo[len - 1] = '\0';
        }

        if (strcmp(palavra, palavraArquivo) == 0) {
            contador++;
        }
    }

    fclose(arquivo);

    printf("A palavra '%s' aparece %d vez(es) no arquivo.\n", palavra, contador);
    return 0;
}
