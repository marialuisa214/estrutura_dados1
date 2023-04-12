#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    // m = letras minusculas a= letras maisculas
    // k = numeros n = minimo de caracteres
    int m, n, a, k, i, somaLetraM, somaLetraA, somaNumero;
    somaLetraM = 0;
    somaLetraA = 0;
    somaNumero = 0;
    char senha[1000];
    scanf("%d %d %d %d", &n, &m, &a, &k);
    scanf("%s", senha);
    for (i = 0; senha[i] != '\0'; i++) {
        if (isdigit(senha[i])) {
            somaNumero++;
        } else {
            if (islower(senha[i])) {
                somaLetraM++;
            } else
                somaLetraA++;
        }
    }
    if (strlen(senha) < n || somaLetraA < a || somaLetraM < m ||
        somaNumero < k) {
        printf("Ufa :)\n");
    } else
        printf("Ok =/\n");

    return 0;
}