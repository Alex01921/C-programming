#include<stdio.h>
#include<conio.h>

void main() {
    int n, *a;
    clrscr();
    
    printf("Enter a number:");
    scanf("%d", &n);
    
    a = &n;
    
    if (*a % 2 == 0)
        printf("Even");
    else
        printf("Odd");
  
    getch();
}
