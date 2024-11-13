#include <stdio.h>

// Function to generate Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci Series up to %d terms: \n", n);

    // Handle the first two terms
    if (n >= 1) printf("%d ", first);
    if (n >= 2) printf("%d ", second);

    // Generate the rest of the Fibonacci series
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
