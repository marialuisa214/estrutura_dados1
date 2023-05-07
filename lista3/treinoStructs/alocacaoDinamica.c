#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct NO {
    int cod;
    char nome[20];

} no;

int main() {
    no *p = (no *) malloc(sizeof(
        no)); // Crio um ponteiro que aponta para o tipo NO, alocando na Stack

    if (p == NULL) { // verificando se existe erro de alocação
        printf("ERRO DE ALOCAÇÃO!\n");
    } else { 
        printf("insira o codigo: ");
        scanf("%d", &p->cod); // p é um registro dinamico, por isso nao usamos p.cod

        printf("\ninsira o nome: ");
        scanf("%s", p->nome);

        // system("clear");
        printf("Codigo %d\nNome %s\n", p->cod, p->nome);
    }
}