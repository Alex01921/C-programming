#include<stdio.h>
int fib(int n);
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    fib(n);
    for(i=0;i<n;i++)
    {
        printf("%d \t",fib(i));
    }
    return 0;
}
int fib(int n)
{
    if(n==0 || n==1)
    return n;
    else
    return(fib(n-1)+fib(n-2));
}
