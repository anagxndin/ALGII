

#include <stdio.h>

int main(){

    FILE *arquivo;
    char entrada;

    arquivo = fopen("arq1.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }
    

    printf("Entre com os caracteres a serem gravados no arquivo: ");
    while (1) {
        scanf(" %c", &entrada);  // espaço antes do %c para ignorar espaços/brancos anteriores
        if (entrada == '0') {
            break;
        }
        fputc(entrada, arquivo);
    }
    fclose(arquivo);

    arquivo = fopen("arq1.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("\nCaracteres no arquivo:\n");
    while ((entrada = fgetc(arquivo)) != EOF) {
        printf(" %c ", entrada);
    }

    fclose(arquivo);

    return 0;
    



}