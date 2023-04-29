#include <stdio.h>

// função recursiva aqui!
int f91(int n){
    if (n >= 101) {
        return n - 10;
    } else {
        return f91(f91(n + 11));
    }
}

int main() {
    int n;
    scanf("%d", &n);
    while ( n != 0) {
        // chama a função, passando n como parametro
        printf("f91(%d) = %d\n", n, f91(n));
        scanf("%d", &n);
    }
}