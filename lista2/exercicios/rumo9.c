#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// somar os numeros individualmente - adiciono na variavel 'soma'
//  dividir por 9 e conferir se tem resto 0 ou divisao inteira
//  se resto 0 -> acaba
//  se divisao inteira com resto != de 0 chama a funaco novamente,
//  contabilizando na pilha nenhum dos casos acima => nao é multiplo de 9

int multiplo9(char *numero, int contagem) {
    int soma = 0;

    for (int i = 0; numero[i] != '\0'; i++) {
        soma = soma + numero[i] - '0';
    }
    if (soma == 9) {
        return contagem;
    } else if (soma < 9) {
        return 0;
    } else {
        char outroNumero[5];
        outroNumero[4] = '\0';
        sprintf(outroNumero, "%d", soma);
        return multiplo9(outroNumero, contagem + 1);
    }
}
int main() {
    char *numero = (char *)malloc(sizeof(char) * 1001);
    int contagem;

    scanf("%s", numero);

    while (strcmp(numero, "0") != 0) {
        contagem = multiplo9(numero, 1);
        if (contagem == 0) {
            printf("%s is not a multiple of 9.\n", numero);
        } else {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", numero, contagem);
        }
        scanf("%s", numero);
    }
    free(numero);
}