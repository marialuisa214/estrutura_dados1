#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca_rec(celula *le, int x){
    if( le->prox == NULL || le->prox->dado == x){
        return le->prox;
    } else {
        return busca_rec(le->prox, x);

    }
}

celula *busca(celula *le, int x){
    celula *a = le->prox;
    while(a != NULL && a->dado != x){
            a = a->prox;
        }
    return a;
    
}

// int main(){
//     celula *teste = (celula *) malloc(sizeof(celula));

//     celula *t1 = (celula *) malloc(sizeof(celula));
//     celula *t2 = (celula *) malloc(sizeof(celula));
//     celula *t3 = (celula *) malloc(sizeof(celula));

//     t1->dado = 5;
//     t2->dado = 4;
//     t3->dado = 7;

//     teste->prox = t1;

//     t1->prox = t2;
//     t2->prox = t3;
//     t3->prox = NULL;

//     celula *passa = busca(teste, 4);
//     printf("encontrado! -> %d\n", passa->dado);


//     celula *passa_dnv = busca_rec(teste, 4);
//     printf("encontrado! -> %d\n", passa_dnv->dado);
// }

