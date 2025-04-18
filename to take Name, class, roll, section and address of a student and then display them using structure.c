#include <stdio.h>

struct student {
    char name[25];
    int class;
    int roll;
    char sec[50];
    char add[50];
} s;

void main() {
    printf("Enter name: ");
    scanf("%s", s.name);
    
    printf("Enter class: ");
    scanf("%d", &s.class);

    printf("Enter Roll number: ");
    scanf("%d", &s.roll);

    printf("Enter section: ");
    scanf("%s", s.sec);

    printf("Enter address: ");
    scanf("%s", s.add);

    printf("\nThe Output is:\n");

    printf("\nName: %s", s.name);
    printf("\nClass: %d", s.class);
    printf("\nRoll Number: %d", s.roll);
    printf("\nSection: %s", s.sec);
    printf("\nAddress: %s", s.add);


}
