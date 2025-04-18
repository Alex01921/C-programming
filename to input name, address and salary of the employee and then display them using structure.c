#include <stdio.h>

struct emp {
    char name[25];
    char add[25];
    int sal;
} s;

void main() {
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter address: ");
    scanf("%s", s.add);

    printf("Enter salary: ");
    scanf("%d", &s.sal);

    printf("\n\n The output is: \n\n");

    printf("\nName: %s", s.name);
    printf("\nAddress: %s", s.add);
    printf("\nSalary: %d", s.sal);

}
