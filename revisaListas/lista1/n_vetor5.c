#include <stdio.h>

int ordena(int vetor[], int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {
        int menor = i;
        for (int j = i + 1; j <= fim; j++) {
            if (vetor[menor] > vetor[j]) {
                menor = j;
            }
        }
        int aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
    }
    return 0;
}

int buscaBinaria(int vetor[], int inicio, int fim, int busca) {
    if (inicio > fim) {
        return 0;
    }
    int meio = (inicio + fim) / 2;
    printf("\n\n meio atual : %d", meio);
    if (vetor[meio] == busca) {
        return 1;
    } else if (vetor[meio] < busca) {
        printf("\n comeco %d ", meio + 1); 
        printf("\n fim %d ", fim); 
        return buscaBinaria(vetor, meio + 1, fim, busca);
    } else{

        printf("novo fim %d ", meio + 1);
        return buscaBinaria(vetor, inicio, meio - 1, busca);
    }
}

int main(){
    int tamanho, busca;
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &busca);
    ordena(vetor, 0, tamanho-1);

     printf("vetor ordenado:  \n");
    for (int i= 0; i< tamanho; i++){
       printf( "%d ",vetor[i]);
    }   

    int x = buscaBinaria(vetor, 0, tamanho - 1, busca);
    printf("%d\n", x);
    puts(" ");
    if(x == 1){
        printf("pertence\n");
    } else{
        printf("não pertence\n");
    }

}