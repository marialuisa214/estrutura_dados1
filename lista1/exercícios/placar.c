#include <stdio.h>
#include <string.h>
int main() {
    int alunos, nota1, nota2, i = 1, j, k = 1;
    char nome1[21], nome2[21];

    while (scanf("%d", &alunos) != EOF) {
        scanf("%s %d", nome1, &nota1);
        while (i < alunos) {
            scanf("%s %d", nome2, &nota2);
            if (nota2 < nota1) {
                nota1 = nota2;
                strcpy(nome1, nome2);
            } else if (nota2 == nota1) {
                if (strcmp(nome1, nome2) < 0) {
                    strcpy(nome1, nome2);
                    nota1 = nota2;
                }
            }
            i++;
        }
        printf("Instancia %d\n", k);
        printf("%s\n", nome1);
        k++;
        i = 1;
    }
}