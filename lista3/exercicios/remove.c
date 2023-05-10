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

void remove_elemento(celula *le, int x) { // o.k!
    celula *ponteiro = (celula *)malloc(sizeof(celula));
    ponteiro = le;
    if (ponteiro->prox->dado == x) {
        celula *p = (celula *)malloc(sizeof(celula));
        p = le->prox;
        le->prox = le->prox->prox;
        p->prox = NULL; // faço o item a ser removido apontar para NULL
        free(p);
    } else {
        remove_elemento(ponteiro->prox, x);
    }
}

void remove_todos_elementos(celula *le, int x) {
    celula *ponteiro = (celula *)malloc(sizeof(celula));
    ponteiro->prox = le->prox;
    while (ponteiro != NULL) {
        printf("passei pelo %d\n", ponteiro->prox->dado);

        if (ponteiro->prox->dado == x) {
            printf("removendo o %d\n", ponteiro->prox-> dado);
            celula *p = (celula *)malloc(sizeof(celula));
            p = le->prox;
            le->prox = le->prox->prox;
            p->prox = NULL;
            free(p);
        }
        ponteiro= ponteiro->prox;
    }
}

int main() {
    celula *l = (celula *)malloc(sizeof(celula));

    celula *t1 = (celula *)malloc(sizeof(celula));
    celula *t2 = (celula *)malloc(sizeof(celula));
    celula *t3 = (celula *)malloc(sizeof(celula));
    celula *t4 = (celula *)malloc(sizeof(celula));
    celula *t5 = (celula *)malloc(sizeof(celula));

    t1->dado = 10;
    t2->dado = 4;
    t3->dado = 6;
    t4->dado = 90;
    t5->dado = 4;

    l->prox = t1;

    t1->prox = t2;
    t2->prox = t3;
    t3->prox = t4;
    t4->prox = t5;
    t5->prox = NULL;

    imprime_rec(l);
    remove_todos_elementos(l, 4);
    imprime_rec(l);
}
