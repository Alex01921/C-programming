#include <stdio.h>
int fact(int n);
int main()
{
    int r, n;
    printf("Enter value of n:");
    scanf("%d", &n);
    r = fact(n);
    printf("Factorial of %d: %d", n, r);
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}
