#include<stdio.h>
#include<stdlib.h>

void circ();

void main() {

    circ();

}

void circ() {
    float r, a, p;
    printf("Enter the radius:");
    scanf("%f", &r);
    a = 3.14 * r * r;
    p = 2 * 3.14 * r;
    printf("Area=%f\n", a);
    printf("Perimeter=%f", p);
}
