#include<stdio.h>
#include<stdlib.h>

void oddeven();

void main() {

    oddeven();

}

void oddeven() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}
