/*Crie uma função que recebe um array como parâmetro e imprime seus valores.*/

#include <stdio.h>

void imprimevet(int vetor[10]){

    for (int i = 0; i < 10; i++)
    {
        printf("%d; ", vetor[i]);
    }
    
};

int main(){

    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};

    imprimevet(vetor);

}