#include <stdio.h>
int main() {
    int tamanho, i, v[10000], menor;
    menor = 0;
    scanf("%d", &tamanho);

    for (i = 0; i < tamanho; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 1; i < tamanho; i++) {
        if (v[i] < v[menor]) {
            menor = i;
        }
    }
    printf("%d\n", menor);

    return 0;
}