#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks[3];
    int total;
};
int main()
{
    int i,j,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the details for student %d:\n",i+1);
        printf("Enter the roll no:");
        scanf("%d",&s[i].roll);
        printf("Enter name:");
        scanf(" %[^\n]",s[i].name);
        printf("Enter three subject marks:\n");
        for(j=0;j<3;j++)
        {
            printf("Subject %d:",j+1);
            scanf("%d",&s[i].marks[j]);
        }
    }
    printf("\n Student details and total marks:\n");
    for(i=0;i<n;i++)
    {
        s[i].total=0;
        printf("Student %d:\n",i+1);
        printf("Roll No: %d\n",s[i].roll);
        printf("Name: %s\n",s[i].name);
        printf("Marks for three subjects:\n");
        for(j=0;j<3;j++)
        {
            s[i].total += s[i].marks[j];
            printf("%d \t",s[i].marks[j]);
        }
        printf("\nTotal marks: %d\n",s[i].total);
    }
    return 0;
}
