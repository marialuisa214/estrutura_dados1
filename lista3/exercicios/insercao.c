#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void insereInicio(celula *le, int x) {
    celula *p = (celula *)malloc(sizeof(celula));
    p->dado = x;
    p->prox = le->prox;
    le->prox = p;
}

void insere_antes(celula *le, int x, int y) {
    while (le->prox) { // 34 -> 10 ->  4 -> 6 -> 8 -> 13 -> ->  NULL
        if (le->prox->dado == y) {
            break;
        }
        le = le->prox;
    }
    insereInicio(le, x);
}

void imprime_rec(celula *le) {
    if (le->prox == NULL) {
        printf("NULL\n");
    } else {
        printf("%d -> ", le->prox->dado);
        imprime_rec(le->prox);
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
    t4->dado = 8;
    t5->dado = 13;

    l->prox = NULL;

    t1->prox = t2;
    t2->prox = t3;
    t3->prox = t4;
    t4->prox = t5;
    t5->prox = NULL;

    insereInicio(l, 34);
    imprime_rec(l);

    insere_antes(l, 2, 8);
    imprime_rec(l);

    insere_antes(l, 999999, 14);
    imprime_rec(l);
}