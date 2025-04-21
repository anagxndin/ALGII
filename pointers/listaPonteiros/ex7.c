#include <stdio.h>

int main(){
    int vetor[5] = {0,1,2,3,4};
    for (int i = 0; i < 5; i++)
    {
        int *p = &vetor[i];
        printf("%d\n", *p);
    }
    
    

}