#include<stdio.h>
#include<stdlib.h>

void sqr();

void main() {

    sqr();

}

void sqr() {
    int n, n2;
    printf("Enter a number:");
    scanf("%d", &n);
    n2 = n * n;
    printf("Square of number=%d", n2);
}
