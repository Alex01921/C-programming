#include<stdio.h>
#include<stdlib.h>

void avg();

void main() {
  
    avg();

}

void avg() {
    int a, b, c, avg;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("Average = %d", avg);
}
