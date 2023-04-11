#include <stdio.h>

int main() {
    int n, c, s, e, total, aux;
    aux = 0;
    total = 0;
    scanf("%d %d", &n, &c);
    while (n > 0) {
        scanf("%d %d", &s, &e);
        total += e - s;
        if (total > c) {
            aux++;
        }
        n--;
    }
    if (aux == 0) {
        printf("N\n");
    } else {
        printf("S\n");
    }

    return 0;
}