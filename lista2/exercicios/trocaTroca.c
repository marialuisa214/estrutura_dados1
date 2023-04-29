#include <stdio.h>

void troca(char *palavra) {
    if (*palavra == '\0') {
        return;
    } else if (*palavra == 'x') {
        printf("%c", 'y');
        troca(++palavra);
    }
}

int main() {
    char palavra[81];
    scanf("%s", palavra);
    troca(palavra);
    puts("");
}