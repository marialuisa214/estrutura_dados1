#include <stdio.h>
int main() {
    int n, a;
    scanf("%d", &n);
    a = 1;
    while (n > 0) {
        if (a % 2 != 0) {
            printf("THUMS THUMS THUMS\n");
        } else
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        a++;
        n--;
    }
    return 0;
}