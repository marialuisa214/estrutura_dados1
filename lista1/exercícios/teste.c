#include <stdio.h>
#include <string.h>

int main() {
    char strings[10][50];
    char menor[50];
    int i, n;

    printf("Digite o numero de strings: ");
    scanf("%d", &n);

    printf("Digite as strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    strcpy(menor, strings[0]);
    for (i = 1; i < n; i++) {
        if (strcmp(strings[i], menor) > 0) {
            strcpy(menor, strings[i]);
        }
    }

    printf("A string em ordem alfabetica mais baixa e: %s\n", menor);

    return 0;
}
