#include<stdio.h>
int main()
{
    int year, result;
    printf("Enter the year:");
    scanf("%d",&year);
    result=((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? printf("%d is leap year",year) : 
    printf("%d is not leap year",year);
    return 0;
}
