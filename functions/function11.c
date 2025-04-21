/*a. Crie uma struct que armazena a idade, altura e peso de uma pessoa.
b. Crie uma função que recebe essa struct como parâmetro e retorna o imc da pessoa.
*/


#include <stdio.h>

typedef struct {
    int idade;
    float altura;
    float peso;

} Pessoa;

int calculaImc(Pessoa pessoa){
    float imc = pessoa.peso / (pessoa.altura * pessoa.altura);
    return imc;
}

int main(){
    Pessoa p;
    p.peso = 60.3;
    p.altura = 1.63;
    float imc = calculaImc(p);
    printf("O imc da pessoa eh: %.1lf", imc);


}