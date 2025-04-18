#include<stdio.h>
#include<stdlib.h>

int fib(int n);

void main() {
    int n, i;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d\n", fib(i));
    }
}

int fib(int n) {
    if (n == 0 || n == 1)
        return n;
    else
        return (fib(n - 1) + fib(n - 2));
}
