#include <stdio.h>
#include <string.h>

int main() {
    int count, soma, num, i, aux;
    char expr[1000];
    char operador;
    aux = 1;
    soma = 0;
    scanf("%d", &count);
    while (count != 0) {
        scanf("%s", expr);
        for (i = 0; i < strlen(expr); i += 2) {
            sscanf(expr + i, "%d%c", &num, &operador);
            if (operador == '+') {
                soma += num;
            }
            else{
                soma -= num;
            }
        }
        printf("Teste %d\n", aux);
        printf("%d\n", soma);
        puts("");

        soma = 0;
        aux++;
        scanf("%d", &count);
    }
}
