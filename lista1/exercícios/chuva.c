#include <stdio.h>
int main() {
    int tamanho, i, j;
    scanf("%d", &tamanho);
    int matriz1[tamanho][tamanho];

    for (i = 0; i < tamanho; i++) {     // pecorrendo linha
        for (j = 0; j < tamanho; j++) { // pecorrendo coluna
            scanf("%d", &matriz1[i][j]);
        }
    }
    int temp;
    for (i = 0; i < tamanho; i++) { // pecorrendo linha
        for (j = 0; j < tamanho; j++) { // pecorrendo coluna
            scanf("%d", &temp);
            matriz1[i][j] += temp; 
        }
    }

    for (i = 0; i < tamanho; i++) { // pecorrendo linha
        printf("%d", matriz1[i][0]);
        for (j = 1; j < tamanho; j++) { // pecorrendo coluna
            printf(" %d", matriz1[i][j]); 
        }
        printf("\n");


    }
    return 0;
}
