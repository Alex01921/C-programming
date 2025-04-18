#include <stdio.h>

struct book {
    char name[30];
    char add[25];
    int age;
} s[10];

void main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Address: ");
        scanf("%s", s[i].add);
        printf("Enter Age: ");
        scanf("%d", &s[i].age);
    }

    printf("\nThe people who are eligible to cast the vote are:\n");
    for (i = 0; i < 5; i++) {
        if (s[i].age > 18) {
            printf("\nName: %s", s[i].name);
            printf("\nAdderss: %s", s[i].add);
            printf("\nAge: %d", s[i].age);
        }
    }

}
