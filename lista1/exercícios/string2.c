#include <stdio.h>
#include<string.h>
int main() {
    char string[1001];
    int i;
    scanf("%s", string);
    for (i = strlen(string); i >= 0; i--) {
        printf("%c", string[i]);
    }
    return 0;
}