#include<stdio.h>
int main()
{
    FILE*fp;
    int id;
    char name[20];
    char address[20];
    fp=fopen("emp.dat","r");
    fscanf(fp,"Emp_id:%d\nEmp_Name:%s\nEmp_Address:%s",&id,name,address);
    printf("Emp_id:%d\n",id);
    printf("Emp_Name:%s\n",name);
    printf("nEmp_Address:%s",address);
    fclose(fp);
    return 0;
}
