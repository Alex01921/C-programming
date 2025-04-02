#include<stdio.h>
int swap(int *x,int *y);
int main()
{
    int a,b;
    printf("Enter the values for a and b:");
    scanf("%d%d",&a,&b);
    printf("\nThe values of a and b before fucntion call are %d and %d",a,b);
    swap(&a,&b);
    printf("\nThe values of a and b after fucntion call are %d and %d",a,b);
    return 0;
}
int swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("\nThe values of a and b inside fucntion call are %d and %d",*x,*y);
}
