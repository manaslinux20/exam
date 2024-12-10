#include <stdio.h>
void compute(int *l, int *w, int *area, int *perimeter) {
    *area = (*l) * (*w);
    *perimeter = 2 * ((*l) + (*w));
}
int main() {
    int length = 5, width = 4, area, perimeter;
    compute(&length, &width, &area, &perimeter);
    printf("Area: %d, Perimeter: %d\n", area, perimeter);
    return 0;
}
