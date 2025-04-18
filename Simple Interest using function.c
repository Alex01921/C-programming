#include<stdio.h>
#include<stdlib.h>

void si();

void main() {
  
    si();

}

void si() {
    int p, t, r, i;
    printf("Enter principal, rate, time:");
    scanf("%d%d%d", &p, &t, &r);
    i = (p * t * r) / 100;
    printf("Simple Interest = %d", i);
}
