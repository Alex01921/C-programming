#include<stdio.h>
#include<conio.h>

void main() {
    int p, t, r, *p1, *p2, *p3, si;

    printf("Enter principal: ");
    scanf("%d", &p);

    printf("Enter time: ");
    scanf("%d", &t);

    printf("Enter rate:");
    scanf("%d", &r);

    p1 = &p;
    p2 = &t;
    p3 = &r;

    si = (*p1 * *p2 * *p3) / 100;

    printf("The simple interest is: %d", si);

    getch();
}
