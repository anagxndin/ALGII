/*a. Crie uma struct que armazena a idade e a altura de uma pessoa.
b. Crie uma função que recebe essa struct como parâmetro e retorna o dobro da idade da pessoa.
*/

#include <stdio.h>

typedef struct {
    int idade;
    float altura;

} Pessoa;

int dobraIdade(Pessoa pessoa){
    float dobro = pessoa.idade * 2;
    return dobro;
}

int main(){
    Pessoa p;
    p.idade = 13;
    int dobro = dobraIdade(p);
    printf("O dobro da idade da pessoa eh: %d", dobro);


}