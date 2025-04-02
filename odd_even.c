#include <stdio.h>
int main()
{
    int a[10], i, count1 = 0, count2 = 0;
    printf("enter the integers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            count1++;
            printf("%d is even\n", a[i]);
        }
        else
        {
            count2++;
            printf("%d is odd\n", a[i]);
        }
    }
    printf("The count of even is %d\n", count1);
    printf("The count of odd is %d", count2);
    return 0;
}
