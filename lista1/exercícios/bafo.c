#include <stdio.h>

int main() {
    int r, a, b, somaA, somaB, aux;
    scanf("%d", &r);
    while (r != 0) {
        aux = 0;
        somaA = 0;
        somaB = 0;
        for (int i = 0; i < r; i++) {
            scanf("%d %d", &a, &b);
            somaA += a;
            somaB += b;
        }
        aux += 1;
        if (somaA > somaB) {
            printf("Teste %d\n", aux);
            printf("Aldo\n");
        } else {
            printf("Teste %d\n", aux);
            printf("Beto\n");
        }
        scanf("%d", &r);
    }
    return 0;
}