#include <stdio.h>

int main(){
    int c;
    c = 10;
    int *p;
    p = &c;

    printf("%d\n", c);
    printf("%d\n", *p);
    printf("%d\n", (void*)p);
    
}