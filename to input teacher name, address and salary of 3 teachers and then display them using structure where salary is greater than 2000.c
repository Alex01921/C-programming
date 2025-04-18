#include <stdio.h>

struct book {
    char name[30];
    char add[25];
    int sal;
} s[10];

void main() {
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Address: ");
        scanf("%s", s[i].add);
        printf("Enter salary: ");
        scanf("%d", &s[i].sal);
    }

    printf("\nThe output is:\n");
    for (i = 0; i < 3; i++) {
        if (s[i].sal > 2000) {
            printf("\nName: %s", s[i].name);
            printf("\nAdderss: %s", s[i].add);
            printf("\nSalary: %d", s[i].sal);
        }
    }

}
