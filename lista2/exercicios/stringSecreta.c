#include <stdio.h>

int main() {
    char b[5]; //separo uma caixinha a mais, afim de garantir o '\0'
    b[4] = 0; //defino o ultimo valor como zero
    while (scanf("%x", (unsigned int *)&b) != EOF) { //verifico o scanf, interpretando por unsigned int, uma caixa destinada a ser char
        printf("%s", (char *)&b); //exibo o valor
    }
    puts("");
}