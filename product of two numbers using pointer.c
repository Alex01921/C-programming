#include<stdio.h>
#include<conio.h>

void main() {
    int a, b, product, *p, *q;

    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    p = &a;
    q = &b;

    product = *p * *q;

    printf("The Product of two numbers is: %d", product);
 
    getch();
}
