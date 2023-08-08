#include <stdio.h>

int main(){
    int soma = 0, teste = 1, i;
    char sinal;
    scanf("%d", &i);
    do{
        scanf("%d", &soma);
        for(int j = 0; j < (i-1); j++){
            int n;
            scanf("%c", &sinal);
            scanf("%d", &n);
            if(sinal == '-'){
                soma -= n;
            } else {
                soma += n;
            }
        }
        printf("Teste %d\n", teste++);
        printf("%d\n", soma);
        soma = 0;
        scanf("%d", &i);
    }while(i != 0);
}