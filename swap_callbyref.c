#include<stdio.h>
int f1(int *x, int *y);
int main()
{
    int x = 20, y = 30;
    f1(&x,&y);
    printf("x = %d and y = %d",x,y);
    return 0;
}
int f1(int *x, int *y)
{
    int *x = 30, *y = 20;
    printf("x = %d and y = %d \n",*x,*y);
    return 0;
}
