#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    int x = 0;
    int quantPalavra = 0;
    float porcentagem;
    int aparece = 0;
    char delimitador[2] = " ";
    char *palavra;
    char letra;

    scanf("%c", &letra);
    scanf("%*c");
    scanf("%[^\n]", frase);
    scanf("%*c");

    palavra = strtok(frase, delimitador);


    while (palavra != NULL) {
        quantPalavra += 1;
        for (int i = 0; i < strlen(palavra); i++) {
            if (palavra[i] == letra) {
                x = 1;
            }
        }
        if(x == 1) aparece += 1;
        x = 0;
        palavra = strtok(NULL, delimitador);
    }
    porcentagem = (double)aparece/quantPalavra;
    printf("%.1lf\n", porcentagem * 100);
    return 0;
}