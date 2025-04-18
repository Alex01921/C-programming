#include <stdio.h>

struct student {
    int roll;
    char name[25];
    int fee;
} s;

void main() {
    printf("Enter Roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter fee: ");
    scanf("%d", &s.fee);

    printf("\nThe Output is:\n");
    printf("\nRoll Number: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nFee: %d", s.fee);

}

