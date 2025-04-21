#include <stdio.h>

int contador(double vetor[5]){
    int aprovados = 0;
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] >= 60)
        {
            aprovados += 1;
        }   
    }
    return aprovados;

}

int main(){
    double notas[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &notas[i]);
    }

    printf("%d", contador(notas));
    
}