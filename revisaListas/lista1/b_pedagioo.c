#include <stdio.h>

int main(){
    int t, p, valorKm, valorPedagio;

    scanf("%d %d", &t, &p);
    scanf("%d %d", &valorKm, &valorPedagio);
    int quant = t/p;
    printf("%d\n", (quant * valorPedagio + t * valorKm));
}