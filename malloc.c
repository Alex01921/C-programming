#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int *arr;       // Pointer to store the address of the dynamically allocated array
    int sum = 0;    // Variable to store the sum of the numbers
    int n = 5;      // Number of elements

    // Dynamically allocate memory for an array of 5 integers
    arr = (int *)malloc(n * sizeof(int)); // Allocates memory for 5 integers

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Input 5 integers from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("The sum of the entered numbers is: %d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
