#include <stdio.h>
#include <string.h>

int main() {
    int a, v, teste = 1;
    scanf("%d %d", &a, &v);
    do {
        int vetor[a];
        memset(vetor, 0, sizeof(vetor));
        int x, y;
        for (int j = 0; j < v; j++) {
            scanf("%d %d", &x, &y);
            vetor[x - 1] += 1;
            vetor[y - 1] += 1;
        }
        int maior = 0;
        for (int z = 1; z < a; z++) {
            if (vetor[maior] < vetor[z]) {
                maior = z;
            }
        }
        printf("Teste %d\n", teste);

        printf("%d", maior+1);
        for(int t=maior+1; t < a; t++){
            if(vetor[t] == vetor[maior]){
                printf(" %d", t+1);
            }
        }
        printf("\n");

        scanf("%d %d", &a, &v);
        teste++;
    } while (a != 0 && v != 0);
}