#include <stdio.h>

void fibonacci(int n) {
    int fib_series[n];
    fib_series[0] = 0;
    fib_series[1] = 1;

    for (int i = 2; i < n; i++) {
        fib_series[i] = fib_series[i - 1] + fib_series[i - 2];
    }

    printf("Fibonacci series up to %d terms: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib_series[i]);
    }
}

int main() {
    int num_terms;
    printf("Enter the number of terms: ");
    scanf("%d", &num_terms);
    fibonacci(num_terms);
    return 0;
}
