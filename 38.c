#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float percentage;
};
void display(struct Student s) {
    printf("ID: %d, Name: %s, Percentage: %.2f\n", s.id, s.name, s.percentage);
}
int main() {
    struct Student s = {101, "Alice", 89.5};
    display(s);
    return 0;
}
