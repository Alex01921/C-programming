#include<stdio.h>
int main()
{
    int i=1,n,count = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        count++;
        i++;

    }while(i<=n);
    if(count==2)
    printf("It is a prime");
    else
    printf("It is not a prime");
    return 0;
}
