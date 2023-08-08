#include <stdio.h>
int main(){
    float precoA, precoG, rendimentoA, reedimentoG;
    scanf("%f %f %f %f", &precoA, &precoG, &rendimentoA, &reedimentoG);
    if(precoA/rendimentoA < precoG/reedimentoG){
        printf("A\n");
    }else{
        printf("G\n");
    }

}