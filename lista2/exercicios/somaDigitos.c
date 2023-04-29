#include <stdio.h>

//recebo um numero e pecorro ele adicionando numa var Soma
//retorno o valor 
int somaDigito(char *numero, int soma){
    if(*numero != '\0'){
        soma = soma + *numero - '0';
        return somaDigito(numero+1, soma); 
    } else return soma;
}

int main(){
    char numero[13];
    scanf("%s", numero);
    printf("%d\n", somaDigito(numero, 0));

}