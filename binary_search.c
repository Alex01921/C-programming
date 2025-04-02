#include<stdio.h>
int main()
{
    int a[10],n,i,key,low=0,high,mid,pos=0,c=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements to be searched:\n");
    scanf("%d",&key);
    high = n-1;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(a[mid] == key)
        {
            pos = mid;
            c = 1;
            break;
        }
        else if(a[mid]>key)
        high = mid - 1;
        else
        low = mid + 1;
    }
    if(c == 0)
    printf("Elements are not found.\n");
    else
    printf("Element %d found at position %d \n",key,pos);
    return 0;
}
