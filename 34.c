#include <stdio.h>
void addMatrices(int a[2][2], int b[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int a[2][2] = {{1, 2}, {3, 4}}, b[2][2] = {{5, 6}, {7, 8}}, result[2][2];
    addMatrices(a, b, result);
    printf("Sum of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
