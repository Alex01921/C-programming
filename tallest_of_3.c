#include<stdio.h>
int main()
{
    int tallest;
    int ht_p1, ht_p2, ht_p3;
    printf("Enter the height of 1st person:");
    scanf("%d",&ht_p1);
    printf("Enter the height of 2nd person:");
    scanf("%d",&ht_p2);
    printf("Enter the height of 3rd person:");
    scanf("%d",&ht_p3);

    if(ht_p1 < ht_p2)
    {
        if(ht_p2 < ht_p3)
        tallest = ht_p3;
        else
        tallest = ht_p2;
    }

    else
    {
        if(ht_p1 < ht_p3)
        tallest = ht_p3;
        else
        tallest = ht_p1;
    }
    printf("The tallest is: %d ",tallest);
    return 0;
}
