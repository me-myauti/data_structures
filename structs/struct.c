#include <stdio.h>
//Tipos de dados abstratos

//Criação da struct
struct pessoa{
    int idade;
    float altura;
};

//Renomeia/define o tipo do dado
typedef struct pessoa Pessoa;

int main(void) {
    //Criação do dado (Semelhante à instância de um objeto)
    Pessoa p;

    p.idade = 15;
    p.altura = 1.65;

    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
}