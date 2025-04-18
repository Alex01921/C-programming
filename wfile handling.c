#include<stdio.h>
#include<stdlib.h>
int main
{
    FILE*fp;
    int roll;
    char name[20];
    int age;
    float percentage;
    fp=fopen("student.dat","w");
    do
    {
        printf("Enter roll no:");
        scanf("%d",&roll);
        printf("Enter name:");
        scanf("%s",name);
        printf("Enter age:");
        scanf("%d",age);
        printf("Enter percentage:");
        scanf("%f",&percentage);
        fprintf(fp,"%d%s%d%f",roll,name,age,percentage);
        printf("Do you want to continue:");
        scanf("%c",&ch);
    } (while ch=='Y'|| ch=='y')
    fclose(fp);
    return 0;
}
