#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printf("%d\n", fibonacci(N));

    return 0;
}
