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

void imprime(celula *le) {
    while (le->prox != NULL) {
        printf("%d -> ", le->prox->dado);
        le= le->prox;
    }
    printf("NULL\n");
}

// int main() {

//     celula *l = (celula *)malloc(sizeof(celula));

//     celula *t1 = (celula *)malloc(sizeof(celula));
//     celula *t2 = (celula *)malloc(sizeof(celula));
//     celula *t3 = (celula *)malloc(sizeof(celula));
//     celula *t4 = (celula *)malloc(sizeof(celula));
//     celula *t5 = (celula *)malloc(sizeof(celula));

//     t1->dado = 10;
//     t2->dado = 4;
//     t3->dado = 6;
//     t4->dado = 8;
//     t5->dado = 13;

//     l->prox = t1;

//     t1->prox = t2;
//     t2->prox = t3;
//     t3->prox = t4;
//     t4->prox = t5;
//     t5->prox = NULL;

//     imprime(l);
//     imprime_rec(l);
// }