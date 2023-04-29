#include <stdio.h>

void ultrapassei(int *v, int limiteSoma, int tamanhoVetor) {
    int soma = 0;
    int controle = 0;
    while (soma < limiteSoma && tamanhoVetor != controle) {
        soma += *v;
        v++;
        controle++;
    }
    if (tamanhoVetor == controle) {
        return ;
    } else{
        ultrapassei(v, limiteSoma,
            tamanhoVetor - controle); // buscar forma mais sofisticada?
        printf("%d\n", *v);
    }
}

int main() {
    int vetor[30];
    int limiteSoma, tamanho = 0;
    scanf("%d", &vetor[tamanho]);
    while (vetor[tamanho] != 0) { // validar o valor do scanf !=0
        tamanho++;
        scanf("%d", &vetor[tamanho]); // REALOC ?
    }
    // puts o ultimo, é igual a zero, tira ele!
    scanf("%d", &limiteSoma);
    ultrapassei(vetor, limiteSoma, tamanho);

    // scanf("%d", limiteSoma);
    //  ultrapassei();
}