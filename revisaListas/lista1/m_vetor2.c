#include <stdio.h>

int main() {
    int tamanho;
    scanf("%d", &tamanho);
    int menor = 1000000;
    int indiceMenor;

    int n;
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &n);
        if (menor > n) {
            menor = n;
            indiceMenor = i;
        }
    }
    printf("%d\n", indiceMenor);
}