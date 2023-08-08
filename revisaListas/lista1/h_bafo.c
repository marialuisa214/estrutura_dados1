#include <stdio.h>
int main(){
    int r, a, b;
    int somaA = 0;
    int somaB= 0;
    int i = 1;
    while(scanf("%d", &r) != EOF){
        while(r > 0){
            scanf("%d %d", &a, &b);
            somaA += a;
            somaB += b;
            r--;            
        }
        printf("Teste %d\n", i);
        if(somaA > somaB){
            printf("Aldo\n");
        }else{
            printf("Beto\n");
        }
        i++;
        
    }
}