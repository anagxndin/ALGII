#include <stdio.h>

typedef struct 
{
    float peso;
    float altura;
} imc;

float calculaimc(float x, float y){
    float imc = x/(y*y);
    return imc;
}


int main(){
    imc x;
    imc *p = &x;

    p->altura = 1.84;
    p->peso = 75.0;

    printf("%.1f\n", calculaimc(p->peso, p->altura));

    


}