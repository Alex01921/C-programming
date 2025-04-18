#include<stdio.h>
#include<stdlib.h>

int fact(int n);

void main() {
    int n, r;

    printf("Enter a number:");
    scanf("%d", &n);

    r = fact(n);

    printf("Factorial=%d", r);

}

int fact(int n) {
    int result;
    if (n == 0)
        result = 1;
    else
        result = (n * fact(n - 1));
    return (result);
}
