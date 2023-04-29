#include <stdio.h>

long int v[81] = {[0 ... 80] = 0}; //variavel global -> possivel de ser chamada em qualquer trecho

long int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        if(v[n] != 0){
            return v[n];
        }
        v[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return v[n];
    }
}
// int main() { printf("%ld\n", fibonacci(80)); }
