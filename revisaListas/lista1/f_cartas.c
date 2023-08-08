#include <stdio.h>
int main(){
    int vetorCartas[5];
    int carta;
    char resultado;

    for (int i = 0; i < 5; i++){
        scanf("%d", &carta);
        vetorCartas[i] = carta;
    }
    for (int i = 0; i < 4; i++){
        if(vetorCartas[i] < vetorCartas[i+1]){
            vetorCartas[i] = 0;}
        else vetorCartas[i] = 1;
        printf("%d ", vetorCartas[i]);
    }
    
    if(vetorCartas[0] == 1){
        for(int i = 1; i < 4; i++){
            if(vetorCartas[i] != 1){
                resultado = 'N';
                break;
            }else resultado = 'D';
        }
    }else{ 
        for(int i = 1; i < 4; i++){
            if(vetorCartas[i] != 0){
                resultado = 'N';
                break;
            }else resultado = 'C';
        }
    }
    printf("%c", resultado);
}