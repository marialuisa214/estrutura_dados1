#include <stdio.h>
int main() {
    int leituras, capacidadeMaxima;
    int total = 0;
    scanf("%d %d", &leituras, &capacidadeMaxima);
    int v[leituras - 1];

    for (int i = 0; i < leituras; i++) {
        int e, s;
        scanf("%d %d", &s, &e);
        total += (e - s);
        v[i] = total;
    }
    for (int i = 0; i < leituras; i++) {
        printf("%d ", v[i]);
        puts(" ");
        if (v[i] > capacidadeMaxima) {
            printf("S\n");
            return 0;
        }
        printf("N\n");
    }
}
