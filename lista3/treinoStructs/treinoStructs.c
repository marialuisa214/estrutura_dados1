#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[30];
    float peso;
    int idade;
};
typedef struct pessoa pessoa; //redefinição de "struct pessoa" para apenas "pessoa"

int main(){
    //criando uma pessoa
    pessoa p1 = {"maria", 38.5, 21};
    puts("Testando:");
    printf("NOME PESSOA: %s\n", p1.nome);
    printf("IDADE PESSOA: %d\n", p1.idade);
    printf("PESO PESSOA: %f\n", p1.peso);

    //atribuindo valores a minha struct
    p1.peso = 40.2;
    strcpy(p1.nome, "maria luisa");
    puts(" ");
    puts("Testando novamente:");
    printf("NOME PESSOA: %s\n", p1.nome);
    printf("IDADE PESSOA: %d\n", p1.idade);
    printf("PESO PESSOA: %f\n", p1.peso);

    //atribuindo valores a minha struct com scanf
    printf("atualize sua idade: ");
    scanf("%d", &p1.idade);
    
    puts(" ");
    puts("Testando novamente:");
    printf("NOME PESSOA: %s\n", p1.nome);
    printf("IDADE PESSOA: %d\n", p1.idade);
    printf("PESO PESSOA: %f\n", p1.peso);

}