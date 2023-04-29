#include <stdio.h>
void inverte(char *string){
    if( *string == '\0'){
        return ;
    } else {
        inverte(string+1);
        printf("%c", *string);
    }
}
int main(){
    char string[501];
    scanf("%s", string);
    inverte(string);
    puts("");
}