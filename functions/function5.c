#include <stdio.h>

void trocaValor(int *X, int *Y) {
    int valorX = *X;  
    *X = *Y;        
    *Y = valorX;      
}

int main() {
    int X = 6, Y = 13;  

    printf("Antes da troca: X = %d, Y = %d\n", X, Y);

    trocaValor(&X, &Y);  

    printf("Depois da troca: X = %d, Y = %d\n", X, Y);

    return 0;
}
