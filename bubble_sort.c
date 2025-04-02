#include<stdio.h>
int main()
{
    int a[10],i,j,n,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    if(n>10 || n<=0)
    {
        printf("Error in the range.\n");
        return 0;
    }
    printf("Enter the array of elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted Elements are:\n");
    for(i=0;i<n;i++)
    printf("%d \t",a[i]);
    return 0;
}
