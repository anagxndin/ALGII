#include <stdio.h>

int main(){
    int c = 10;
    int *p = &c;

    printf("%d\n", c);
    printf("%d\n", *p);
    printf("%d\n", p);

}