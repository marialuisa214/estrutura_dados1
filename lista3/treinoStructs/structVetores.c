#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[30];
    float peso;
    int idade;
};
typedef struct pessoa pessoa; //redefinição de "struct pessoa" para apenas "pessoa"

int main(){
    pessoa listaPessoas[3];
    int i;
    //adicionando pessoas na milista por meio da posicao na lista
    for(i=0; i < 3; i++){
        printf("ADICIONE O NOME DA %dº PESSOA: ", i+1);
        scanf("%s", listaPessoas[i].nome);
        puts(" ");
        printf("ADICIONE O PESO DA %dº PESSOA: ", i+1);
        scanf("%f", &listaPessoas[i].peso);
        puts(" ");
        printf("ADICIONE A IDADE DA %dº PESSOA: ", i+1);
        scanf("%d", &listaPessoas[i].idade);
        puts(" ");

    }

    //lendo pessoas na minha lista
    for(i=0; i < 3; i++){
        printf("NOME DA %dº PESSOA: %s\n", i+1, listaPessoas[i].nome);
        printf("PESO DA %dº PESSOA: %f\n", i+1, listaPessoas[i].peso);
        printf("IDADE DA %dº PESSOA: %d\n", i+1, listaPessoas[i].idade);
        puts(" ");

    }

}