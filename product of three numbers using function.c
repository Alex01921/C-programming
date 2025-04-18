#include<stdio.h>
#include<stdlib.h>

void mul();

void main() {
  
    mul();

}

void mul() {
    int a, b, c, p;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    p = a * b * c;
    printf("Product = %d", p);
}
