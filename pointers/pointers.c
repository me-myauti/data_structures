#include <stdio.h>

//Criado ponteiro chamado de p
int *p;

//Criado variável de valor 5
int val = 5;

int main(){

    //Ponteiro p aponta para o endereço da variável val
    p = &val;

    //Exibir o valor armazenado no ponteiro p
    printf("O valor de p é: %d", *p);

    return 0;
}