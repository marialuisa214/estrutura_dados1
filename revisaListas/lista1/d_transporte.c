#include <stdio.h>

int main(){
    int a, b, c, x, y, z;
    scanf("%d %d %d", &a, &b, &c); //dimensoes conteiner
    scanf("%d %d %d", &x, &y, &z); //dimensoes navio

    printf("%d\n", ((x/a)*(y/b)*(z/c)));
}