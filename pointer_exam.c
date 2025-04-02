#include <stdio.h>
int main() {
 int arr[] = {-7, 9, 13, 140, 18}, *p;
 p = arr;
 printf("%d", *p);
 p += 2;
 printf("\n%d", *p);
 p--;
 printf("\n%d", *p);
 p--;
 printf("\n%d", *p);
 return 0;
}
