/*neps 174*/

#include <stdio.h>

int fatorial(int n){
    if (n==0)
    {
        return 1;
    } else
    {
        return n * fatorial(n-1);
    }   
}

int main(){

    int N;
    scanf("%d", &N);

    printf("%d",fatorial(N));
    


}