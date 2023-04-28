#include <stdio.h>
#include <string.h>
int main() {
    int linha, coluna, i, j, maior = 0;
    scanf("%d %d", &linha, &coluna); // como inicializar com valor 0??
    int somaLinha[linha], somaColuna[coluna];
    memset(somaLinha, 0, sizeof(somaLinha));
    memset(somaColuna, 0, sizeof(somaColuna));
    int matriz[linha][coluna];

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            scanf("%d", &matriz[i][j]);
            somaLinha[i] += matriz[i][j];
        }
    }
    for (j = 0; j < coluna; j++) {
        for (i = 0; i < linha; i++) {
            somaColuna[j] += matriz[i][j];
        }
    }
    for (j = 0; j < coluna - 1; j++) {
        if (somaColuna[j] < somaColuna[j + 1]) {
            maior = somaColuna[j++];
            puts("passei aqui");
            printf("coluna soma: %d\n", maior);
        }
    }
    for (i = 0; i < linha; i++) {
        if (maior < somaLinha[i])
            maior = somaLinha[i];
    }
    printf("%d", maior);
    return 0;
}
