#include <stdio.h>
#include <string.h>
int main() {
    int alunos, nota, instancia = 1;
    char aluno[20];

    char reprovadoNome[20];
    int reprovadoNota = 11;

    while(scanf("%d", &alunos) != EOF){
        while (alunos > 0) {
        scanf("%s %d", aluno, &nota);
        if(nota < reprovadoNota) {
            reprovadoNota = nota;
            strcpy(reprovadoNome, aluno);
        } else if( nota == reprovadoNota) {
            if(strcmp(aluno, reprovadoNome) > 0) {
                strcpy(reprovadoNome, aluno);
            }
        }
        alunos--;
        }
    printf("Instancia %d\n", instancia);
    printf("reprovado: %s\n", reprovadoNome);
    instancia++;
    reprovadoNota = 11;
    }
}