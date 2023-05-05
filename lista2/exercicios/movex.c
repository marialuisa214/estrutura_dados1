#include <stdio.h>
#include <string.h>
// pecorrer a minha string, caracter por caracter
// validar se é um X minusculo
//  se sim, remover - lo e x++ e
// adicionalo quando string -> NULL

int valorX(char *palavra) {
    if (*palavra == '\0') {
        return 0;
    } else if (*palavra == 'x') {
        valorX(palavra + 1); // palavra + 1 -> pegando o prox elemento da string
        printf("%c", *palavra);
        return 0;
    } else {
        printf("%c", *palavra);
        valorX(palavra + 1);
        return 0;
    }
}
int main() {
    char string[101];
    scanf("%s", string);
    valorX(string);
    puts("");
}
