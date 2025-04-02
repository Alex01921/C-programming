#include <stdio.h>
int main() {
 char str[] = "HELLO", *ptr;
 ptr = str; // Assume base address as 200
 while (*ptr != '\0') {
 printf("\nCharacter: %c, Address: %p", *ptr, ptr);
 ptr++;
 }
 return 0;
}
