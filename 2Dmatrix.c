#include <stdio.h>
int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2x3 Matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: %d\t", i, j, matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
