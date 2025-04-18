#include <stdio.h>

struct book {
    int id;
    char name[25];
    int pr;
} s[3];

void main() {
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter book id: ");
        scanf("%d", &s[i].id);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Price: ");
        scanf("%d", &s[i].pr);
    }

    printf("\nThe output is: ");
    for (i = 0; i < 3; i++) {
        printf("\nBook ID: %d", s[i].id);
        printf("\nName: %s", s[i].name);
        printf("\nPrice: %d", s[i].pr);
    }

}
