#include<stdio.h>
int main()
{
    int original,n,remainder,reversed;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n>9999 || n<1000)
    {
        printf("Error: Invalid entry of the number \n");
        return 0;
    }
    original = n;
    reversed = 0;
    while(n!=0)
    {
        remainder = n % 10;
        n = n/10;
        reversed = reversed * 10 + remainder;
    }
    printf("The reverse of %d is %d \n",original,reversed);
    if(original == reversed)
    {
        printf("It is a palindrome.");
    }
    else
    {
        printf("It is not a palindrome.");
    }
    return 0;
}
