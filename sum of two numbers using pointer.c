#include<stdio.h>
#include<conio.h>

void main() {
    int a, b, sum, *p, *q;

    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    p = &a;
    q = &b;

    sum = *p + *q;

    printf("The sum of two numbers is: %d", sum);

    getch();
}
