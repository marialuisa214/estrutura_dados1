#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    int cod;
    struct no *prox; // linkando cada no, que contem um nome, ao proximo.
} no;

typedef struct lista {
    no *inicio;
    no *fim;
} lista;

lista listaNo;

void insereInicio(int cod) {
    no *p = (no *)malloc(sizeof(no));
    p->cod = cod;
    p->prox = NULL;

    if (listaNo.inicio == NULL) { // LISTA VAZIA
        listaNo.inicio = p;
        listaNo.fim = p; // ou seja, o primeiro elemento é tbm é o último

    } else {
        p->prox = listaNo.inicio;
        listaNo.inicio = p;
    }
}

void insereFim(int cod) {
    no *p = (no *)malloc(sizeof(no));
    p->cod = cod;
    p->prox = NULL;

    if (listaNo.inicio == NULL) { // LISTA VAZIA
        listaNo.inicio = p;
    } else {
        listaNo.fim->prox = p;
    }
    listaNo.fim = p;
}

void imprime() {
    puts(" ");
    no *p = listaNo.inicio;
    while (p != NULL) {
        printf("%d\n", p->cod);
        p = p->prox;
    }
    puts(" ");
}

void menu() {
    puts("Digite 1 para inserir no inicio da lista;");
    puts("Digite 2 para inserir no fim da lista;");
    puts("Digite 3 para vizualizar o conteudo da lista;");
    puts("Digite 0 para encerrar o programa.");
}

int main() {
    int digito, cod;
    digito = 1;

    // garantindo que minha lista inicia vazia
    listaNo.inicio = NULL;
    listaNo.fim = NULL;

    menu();
    scanf("%d", &digito);
    while (digito != 0) {
        switch (digito) {
        case 0:
            break;
        case 1:
            puts("Insira o cod que será inserido:  ");
            scanf("%d", &cod);
            insereInicio(cod);
            break;
        case 2:
            puts("Insira o cod que será inserido:  ");
            scanf("%d", &cod);
            insereFim(cod);
            break;
        case 3:
            imprime();
            break;
        default:
            puts("Você selecionou uma opção invalida\n");
            break;
        }

        menu();
        scanf("%d", &digito);
    }
}