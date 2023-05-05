#include <stdio.h>
#include <stdlib.h>

void ultrapassei(int *v, int limiteSoma, int tamanhoVetor) {
    int soma = 0;
    int controle = 0;

    while (soma <= limiteSoma && tamanhoVetor != controle) {
        soma += *v;
        v++;
        controle++;
    }
    if (tamanhoVetor == controle) {
        if (soma > limiteSoma) {
            printf("%d\n", *(v - 1));
        }
        return;
    } else {
        ultrapassei(v, limiteSoma, tamanhoVetor - controle); // buscar forma mais sofisticada?
        printf("%d\n", *(v - 1));
    }
}

int main() {
    int *vetor = malloc(sizeof(int));
    int limiteSoma, tamanho = 0;
    scanf("%d", &vetor[tamanho]);
    while (vetor[tamanho] != 0) { // validar o valor do scanf !=0
        tamanho++;
        vetor = realloc(vetor, tamanho * sizeof(int));
        scanf("%d", &vetor[tamanho]); // REALOC ?
    }
    scanf("%d", &limiteSoma);
    ultrapassei(vetor, limiteSoma, tamanho);

    // scanf("%d", limiteSoma);
    //  ultrapassei();
}