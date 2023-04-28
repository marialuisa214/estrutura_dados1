#include <stdio.h>

void swap(int *a, int *b) {
    int intermediario;
    intermediario = *a;
    *a = *b;
    *b = intermediario;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Antes : %d %d\n", a , b);

    swap(&a, &b);

    printf("Depois : %d %d\n", a , b);
}