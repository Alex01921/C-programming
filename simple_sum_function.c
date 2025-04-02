#include<stdio.h>
int sum(int a, int b);
int main()
{
    int m,n,add;
    printf("Enter two numbers:");
    scanf("%d%d",&m,&n);
    add = sum(m,n);
    printf("The sum is %d",add);
}
int sum(int a, int b)
{
    int add;
    add = a + b;
    return add;
}
