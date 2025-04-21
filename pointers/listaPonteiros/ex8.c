#include <stdio.h>

int main(){
    int m[3][3] = {{1,1,1},{0,0,0},{1,1,1}};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int *p = &m[i][j];
            printf("%d ", *p);
        }
        printf("\n");
    }
    
}