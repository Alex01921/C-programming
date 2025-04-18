#include <stdio.h>

// Declaration of the external variable
extern int globalVar;

void exampleFunction() {
    printf("Inside exampleFunction, globalVar: %d\n", globalVar);
}

int main() {
    // Definition of the external variable
    int globalVar = 42;

    exampleFunction();

    printf("Inside main, globalVar: %d\n", globalVar);

    return 0;
}

// Definition of the external variable
int globalVar;
