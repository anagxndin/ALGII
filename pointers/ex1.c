#include <stdio.h>

int multiplica(int x, int y){
    return x*y;
}

int main(){
    int m, j;
    scanf("%d %d", &m, &j);
   
    printf("%d\n", multiplica(m,j));

}