#include <stdio.h>
#include <string.h>

int main() {
    char senha[1000];
    int n, m, a, k;
    scanf("%d %d %d %d", &n, &m, &a, &k);
    scanf("%s", senha);
    if (strlen(senha) > n) {
        for (int i = 0; i < strlen(senha); i++) {
            if (senha[i] >= 48 && senha[i] <= 57) {
                k--;
            } else if (senha[i] >= 65 && senha[i] <= 90) {
                a--;
            } else if (senha[i] >= 97 && senha[i] <= 122) {
                m--;
            }
        
    }
    if (k <= 0 && m <= 0 && a <= 0) {
        printf("Ok =/\n");
    } else {
        printf("Ufa :)\n");
    }
}