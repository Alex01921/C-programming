#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fp;
    int roll;
    char name[20];
    int age;
    float percentage;
    char ch;
    fp = fopen("student.dat", "w");
    if (fp == NULL) {
        printf("Error opening the file!\n");
        return 1;
    }

    do {
        // Input details from the user
        printf("Enter roll no: ");
        scanf("%d", &roll);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter age: ");
        scanf("%d", &age);
        printf("Enter percentage: ");
        scanf("%f", &percentage);
        fprintf(fp, "%d %s %d %f\n", roll, name, age, percentage);
        printf("Do you want to continue (Y/N): ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
    fclose(fp);
    return 0;
}
