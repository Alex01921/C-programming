#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="hello";
    char s2[15]="jhello";
    char s3[20];
    strcpy(s3,s1);
    printf("%s\n",s3);
    printf("%d\n",strlen(s3));
    printf("%d\n",strlen(s1));
    printf("%s\n",strcat(s2,s1));
    int result= strcmp(s1,s2);
    printf("%d",result);
}
