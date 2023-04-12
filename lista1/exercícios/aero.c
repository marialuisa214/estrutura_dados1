#include <stdio.h>

int main() {
    int a, count, x, y, i, j;
    scanf("%d %d", &a, &count);
    int vetor[101];
    i = 0;
    while (i < 2 * count) {
        scanf("%d", &x);
        vetor[i] = x;
        i++;
    }
    for (i = 0; i < count * 2; i++) {
        puts("");
        printf("%d\n", vetor[i]);
    }

    return 0;
}