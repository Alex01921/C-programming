#include <stdio.h>

void exampleFunction() {
    auto int localVar = 10;  // Automatic storage class by default

    printf("Local variable inside the function: %d\n", localVar);
}

int main() {
    exampleFunction();

    // next line will create error if comment is removed 
    // printf("Local variable outside the function: %d\n", localVar);

    return 0;
}
