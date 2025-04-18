#include <stdio.h>
int main()
{
   FILE*fp;
   int i;
   int salary;
   char name[20];
   int age;
   fp=fopen("person.txt","w");
   for(i=0;i<2;i++)
   {
   printf("Enter name:");
   scanf("%s",name);
   printf("Enter salary:");
   scanf("%d",&salary);
   printf("Enter age:");
   scanf("%d",&age);
   fprintf(fp,"Name:%s\nsalary:%d\nAge:%d",name,salary,age);
   }
   fclose(fp);
    return 0;
}
