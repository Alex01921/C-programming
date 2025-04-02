#include<stdio.h>
int main()
{
    int pickednumber,isprime,i;
    printf("Enter the picked number:");
    scanf("%d",&pickednumber);
    isprime = 1;
    if(pickednumber<=1)
    {
        isprime = 0;
    }
    else
    {
        for(i=2;i*i<=pickednumber;i++)
    {
        if(pickednumber%i==0)
        {
            isprime = 0;
            break;
        }
    }
    }
    if(isprime)
    {
        printf("the number you chose is prime number %d",pickednumber);
    }
    else
    {
        printf("the number you chose is not prime number %d",pickednumber);
    }
    return 0;
}
