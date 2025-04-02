#include<stdio.h>
int main()
{
    int roll_no;
    char name[20];
    int marks[5],total=0,avg,i;

    for(i=0;i<5;i++)
    {
        printf("Enter roll no:");
        scanf("%d",&roll_no);
        printf("Enter name:");
        scanf("%s",&name[i]); 
        printf("Enter mark:");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        total = total+ marks[i];
    }
    avg = total/5;
    printf("\nAvergae of marks: %d",avg);
    return 0;
}
