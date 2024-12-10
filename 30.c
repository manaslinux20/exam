#include <stdio.h>
#define PI 3.14

// 1. No argument, no return value
void area_no_arg_no_ret() {
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area: %.2f\n", area);
}

// 2. Argument, no return value
void area_arg_no_ret(float radius) {
    printf("Area: %.2f\n", PI * radius * radius);
}

// 3. No argument, return value
float area_no_arg_ret() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    return PI * radius * radius;
}

// 4. Argument and return value
float area_arg_ret(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius = 5.0;

    printf("Category 1:\n");
    area_no_arg_no_ret();

    printf("Category 2:\n");
    area_arg_no_ret(radius);

    printf("Category 3: Area = %.2f\n", area_no_arg_ret());

    printf("Category 4: Area = %.2f\n", area_arg_ret(radius));

    return 0;
}
