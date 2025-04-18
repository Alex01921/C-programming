#include <stdio.h>

int main()
{
   FILE*fp;
   int roll;
   char name[20];
   int age;
   fp=fopen("student.txt","w");
   printf("Enter roll no:");
   scanf("%d",&roll);
   printf("Enter name:");
   scanf("%s",name);
   printf("Enter age:");
   scanf("%d",&age);
   fprintf(fp,"Roll:%d\nName:%s\nAge:%d",roll,name,age);
   fclose(fp);
    return 0;
}
