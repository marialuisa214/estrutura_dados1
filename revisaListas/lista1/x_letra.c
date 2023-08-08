#include <stdio.h>
#include <string.h>
int main() {
    char frase[1000];
    char busca;

    int temBusca = 0;
    int soma = 0;
    int quantPalavras = 0;
    int espacos = 0;

    scanf("%c", &busca);
    scanf("%s", frase);
    int tamanho = 0;

    while (frase[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = 0; i < tamanho; i++) {
        if (frase[i] == 32) { // espaço
            espacos++;
            if (temBusca > 0) {
                soma += 1;
                temBusca = 0;
            }
        } else if (frase[i] == busca) {
            temBusca += 1;
            printf("na palavra%d achei %c\n", espacos + 1, busca);
        }
    }
    if (temBusca > 0) {
        soma += 1;
        temBusca = 0;
    }
    quantPalavras = espacos + 1;
    printf("quantidade de palavras: %d  palavras com busca: %d\n",
           quantPalavras, soma);

    printf("%.1f\n", (float)soma / quantPalavras * 100);
}