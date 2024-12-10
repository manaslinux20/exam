#include <stdio.h>
int main() {
    int marks[3][3], subjectTotal[3] = {0}, grandTotal = 0;
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for Student %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
            subjectTotal[j] += marks[i][j];
        }
    }
    for (int i = 0; i < 3; i++) grandTotal += subjectTotal[i];
    printf("Subject Totals: %d %d %d\nGrand Total: %d\n", subjectTotal[0], subjectTotal[1], subjectTotal[2], grandTotal);
    return 0;
}
