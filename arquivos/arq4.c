#include <stdio.h>

int main(){
    char c, A;
    int contador = 0;
    printf("Escolha um caracter: ");
    scanf(" %c", &c);

    FILE *arq;
    arq = fopen("arq.txt", "r+");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((A = fgetc(arq)) != EOF)
    {
        if (A == c)
        {
            contador++;
        }
    }

    fclose(arq);
    
    printf("O caracter '%c' aparece %d vezes.\n", c, contador);

}