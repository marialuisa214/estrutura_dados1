#include <stdio.h>

// função recursiva aqui!
int maldicao(int n){
    if (n >= 101) {
        return n - 10;
    } else {
        return maldicao(maldicao(n + 11));
    }
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        // chama a função, passando n como parametro
        printf("%d\n", maldicao(n));
    }
}