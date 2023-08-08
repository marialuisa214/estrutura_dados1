#include <stdio.h>
int main(){
    int n, i = 1, thums;

    scanf("%d", &n);
    while(i  <= n){
        if(i & 1){
            thums = 3;
        } else thums = 6;
        for(int j = 0; j < thums; j++){
            printf("Thums "); 
        }
        printf("\n");
        i++;
    }
}