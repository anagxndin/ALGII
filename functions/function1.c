/*1. Implemente uma função que calcula o quadrado de um número.
*/

#include <stdio.h>

double Quadrado(double N){
    double q;
    q = N*N;
    return q;
}

int main(){
    double N;
    scanf("%lf", &N);

    double quadrado = Quadrado(N);
    printf("O quadrado de %.2lf eh %.2lf\n", N, quadrado);

}