#include <stdio.h>
#include <string.h>

// pecorrer a minha string, caracter por caracter
// validar se é um X minusculo
//  se sim, remover - lo e x++ e
// adicionalo quando string -> NULL
void valorX(char qualquer[100], int tamanho) {
    if (strcmp(&qualquer[tamanho], "x") == 0)  {
        printf("%d\n", 1);
        tamanho -= 1;
        valorX(qualquer, tamanho);

    } else {
        printf("%d\n", 0);
        tamanho -= 1;
        valorX(qualquer, tamanho);
    }
}

int main() {
    char string[100];

    scanf("%s", string);
    valorX(string, 5);
}