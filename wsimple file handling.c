#include <stdio.h>
#include <stdlib.h>
int main() 
    {
    FILE *fp;
    int roll;
    int age;
    char name[20];
    fp= fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening the file!\n");
        exit(1);
    }
    fscanf(fp,"Roll:%d\nName:%s\nAge:%d",&roll,name,&age);
    printf("Roll:%d\nName:%s\nAge:%d",roll,name,age);
    fclose(fp);
    return 0;
}
