#include <stdio.h>

int main(){
    int xmaria, ymaria, xreuniao, yreuniao;
    scanf("%d %d %d %d", &xmaria, &ymaria, &xreuniao, &yreuniao);
    
    int distancia = ((xmaria - xreuniao)+(ymaria - yreuniao));

    if(distancia > 0){
        printf("%d\n", distancia);
    } else printf("%d\n", (distancia * (-1)));
}