#include <stdio.h>
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    
    int a = 1, b = 1, c;
    
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return b;
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Return non-zero to indicate error
    }
    
    int result = fibonacci(n);
    
    printf("The %d-th Fibonacci number is: %d\n", n, result);
    
    return 0;
}
