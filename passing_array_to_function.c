#include<stdio.h>
int avg(int[],int);
int main()
{
    int average;
    int marks[5] = {10,15,20,35,45};
    average = avg(marks,5);
    printf("Average: %d",average);
    return 0;
}
int avg(int marks[],int a)
{
    int average;
    int i,sum = 0;
    for(i=0;i<a;i++)
    {
        sum = sum + marks[i];
    }
    average = sum/a;
    return average;
}
