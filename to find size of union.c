#include <stdio.h>

union {
    int id;
    char Name[30];
} e;

void main() {
    printf("The size of union is %d\n", sizeof(e));
}
