#include <stdio.h>
typedef struct {
    int feet;
    float inches;
} Distance;

Distance addDistances(Distance d1, Distance d2) {
    Distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    if (sum.inches >= 12) {
        sum.feet++;
        sum.inches -= 12;
    }
    return sum;
}

int main() {
    Distance d1 = {5, 9.5}, d2 = {3, 8.2}, sum;
    sum = addDistances(d1, d2);
    printf("Sum = %d feet %.2f inches\n", sum.feet, sum.inches);
    return 0;
}
