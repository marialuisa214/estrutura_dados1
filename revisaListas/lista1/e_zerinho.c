#include <stdio.h>
int main(){
    int a,b,c;
    int empate = 1;
    char vencedor;

    while(empate == 1){
    scanf("%d %d %d", &a, &b, &c);
        if(a == b && b ==c){
          break;}
        else if(a == b){
            vencedor = 'C';
            empate = 0;}
        else if(a == c){
            vencedor = 'B';
            empate = 0;}
        else if(c == b){
            vencedor = 'A';
            empate = 0;}
    }
    printf("%c", vencedor);
}