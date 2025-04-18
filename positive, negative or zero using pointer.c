#include<stdio.h>
#include<conio.h>

void main() {
    int n, *a;
    clrscr();
    
    printf("Enter a number:");
    scanf("%d", &n);
    
    a = &n;
    
    if (*a > 0)
    {
        printf("Positive");
    }
    else if (*a < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }

    getch();
}
