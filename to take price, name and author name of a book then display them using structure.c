#include <stdio.h>

struct book {
    int price;
    char name[25];
    char author[30];
} s;

void main() {
    printf("Enter price of book: ");
    scanf("%d", &s.price);

    printf("Enter name of book: ");
    scanf("%s", s.name);

    printf("Enter Author name: ");
    scanf("%s", s.author);

    printf("\nThe Output is:\n");

    printf("\nPrice: %d", s.price);
    printf("\nName: %s", s.name);
    printf("\nAuthor: %s", s.author);

}
