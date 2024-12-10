#include <stdio.h>
int main() {
    int marks[5], i, total = 0;
    float percentage;
    printf("Enter marks of 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    percentage = total / 5.0;
    printf("Total = %d, Percentage = %.2f%%\n", total, percentage);
    return 0;
}
