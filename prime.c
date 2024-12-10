#include <stdio.h>
int main() {
    int low, high, i, flag;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);
    for (int num = low; num <= high; num++) {
        if (num < 2)
            continue;
        flag = 1;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
