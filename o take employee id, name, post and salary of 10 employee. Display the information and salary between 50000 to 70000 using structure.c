/* WAP to take employee id, name, post and salary of 10 employee. Display the information and salary between 50000 to 70000 */

#include<stdio.h>
#include<conio.h>
struct employee
{
    int id;
    char name[20];
    char post[20];
    int salary;
}e[2];
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter id:");
        scanf("%d",&e[i].id);
        printf("Enter name:");
        scanf("%s",e[i].name);
        printf("Enter post:");
        scanf("%s",e[i].post);
        printf("Enter salary:");
        scanf("%d",&e[i].salary);
    }
    printf("\n");
    printf("The ouput is:\n");
    for(i=0;i<2;i++)
    {
      if(e[i].salary>500 && e[i].salary<700)
      {
          printf("%d \t %s \t %s \t %d",e[i].id,e[i].name,e[i].post,e[i].salary);
      }
    }
    return 0;
}
