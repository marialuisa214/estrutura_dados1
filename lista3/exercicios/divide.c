#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;


void imprime_rec(celula *le) {
    if (le->prox == NULL) {
        printf("NULL\n");
    } else {
        printf("%d -> ", le->prox->dado);
        imprime_rec(le->prox);
    }
}

void divide_lista(celula *l, celula *l1, celula *l2) {
    // "pecorrer" os itens da l
    // avaliar se é par
    //  se sim, cabeça aponta
    // else if -> é impar
    // l acabou?
    // os ultimos de l1 e l2 apontam para NULL

    if (l->prox == NULL) {
        printf("aponto para o nada\n");
        l1->prox = NULL;
        l2->prox = NULL;
    }
    if (l->prox->dado % 2 == 0) { // verificando se é par
        l1->prox = l->prox;
        printf("sou par:%d\n", l1->prox->dado);
        imprime_rec(l1);
        divide_lista(l->prox, l1->prox, l2);
    } else {
        l2->prox = l->prox;
        printf("sou IMPAR:%d\n", l2->prox->dado);
        imprime_rec(l2);
        divide_lista(l->prox, l1, l2->prox);
    }
}


int main() {
    celula *l = (celula *)malloc(sizeof(celula));
    celula *l1 = (celula *)malloc(sizeof(celula));
    celula *l2 = (celula *)malloc(sizeof(celula));

    celula *t1 = (celula *)malloc(sizeof(celula));
    celula *t2 = (celula *)malloc(sizeof(celula));
    celula *t3 = (celula *)malloc(sizeof(celula));
    celula *t4 = (celula *)malloc(sizeof(celula));
    celula *t5 = (celula *)malloc(sizeof(celula));

    t1->dado = 10;
    t2->dado = 4;
    t3->dado = 7;
    t4->dado = 8;
    t5->dado = 13;

    l->prox = t1;
    l1->prox = NULL;
    l2->prox = NULL;

    t1->prox = t2;
    t2->prox = t3;
    t3->prox = t4;
    t4->prox = t5;
    t5->prox = NULL;

    divide_lista(l, l1, l2);
    imprime_rec(l1);
    
}