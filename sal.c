#include <stdio.h>
int main() {
    float basic, hra, da, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    hra = basic * 0.2;
    da = basic * 0.8;
    gross = basic + hra + da;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
