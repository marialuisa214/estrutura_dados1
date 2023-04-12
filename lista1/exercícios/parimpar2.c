#include <stdio.h>

int main() {
    int tamanho, v[10000], i;

    scanf("%d", &tamanho);
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < tamanho; i++) {
        // printf("%d\n", v[i]);
        if ((v[i] % 2) == 0) {
            printf("%d ", i);
        }
    }
    puts("");
    for (i = 0; i < tamanho; i++) {
        if ((v[i] % 2) != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}