#include<stdio.h>
int main(){
    double  a, g, Ra, Rg;
    scanf("%lf %lf %lf %lf", &a, &g, &Ra, &Rg);
    if( a/Ra < g/Rg){
        printf("A\n");
    }else{
        printf("G\n");
    }
    return 0;
    
}