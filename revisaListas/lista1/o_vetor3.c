#include <stdio.h>

int main() {
    int tamanho;
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        int n;
        scanf("%d", &n);
        vetor[i] = n;
    }
    for(int i=0; i<tamanho; i++) {
        if((vetor[i]&1) == 1){
            printf("%d ", vetor[i]);    
        }
    }
    puts("");
    for(int i=0; i<tamanho; i++) {
        if((vetor[i]&1) == 0){
            printf("%d ", vetor[i]);    
        }
    }

}