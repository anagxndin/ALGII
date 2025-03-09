#include <stdio.h>

typedef struct{
    int idade;
    float peso;
    float altura;

} Irmao;

int main(){
    int idade;
    Irmao irmao1;
    Irmao irmao2;
    float peso, altura;
    int maior;

    scanf("%d %f %f", &irmao1.idade, &irmao1.peso, &irmao1.altura);
    scanf("%d %f %f", &irmao2.idade, &irmao2.peso, &irmao2.altura);

    if (irmao1.idade > irmao2.idade)
    {
        maior = irmao1.idade;
    } else {
        maior = irmao2.idade;
    }
    

    printf("O irmao mais velho tem %d anos.\n", maior);


    return 0;
}