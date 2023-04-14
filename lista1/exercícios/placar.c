#include <stdio.h>
#include <string.h>
int main() {
    int alunos, nota1, nota2, i = 1, j;
    char nome1[21], nome2[21];

    scanf("%d", &alunos);
    scanf("%s %d", nome1, &nota1);

    while (i < alunos) {
        scanf("%s %d", nome2, &nota2);
        if (nota2 < nota1) {
            nota1 = nota2;
            strcpy(nome1, nome2);
        } else if (nota2 == nota1) {
            for (j = 0; j < strlen(nome1); j++) {
                if (strcmp(&nome1[i], &nome2[i]) < 0) {
                    strcpy(nome1, nome2);
                    nota1 = nota2;
                    break;
                }
            }
        }
        i++;
    }
    printf("%s\n", nome1);
}