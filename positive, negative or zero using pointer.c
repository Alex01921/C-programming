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

    printf("\n\nCoded by Gaurav Dhakal(M2,15)\n\n");
    getch();
}
