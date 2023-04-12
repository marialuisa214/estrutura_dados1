#include <stdio.h>
int main() {
    int n, v[10000], busca, i, aux;
    aux = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &busca);
    for (i = 0; i < n; i++) {
        if (v[i] == busca) {
            aux = 1; // achei
        }
    }
    if(aux == 1) puts("pertence");
    else puts("nao pertence");
    return 0;
}