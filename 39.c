#include <stdio.h>
struct Student {
    char name[50];
    int roll;
};
void display(struct Student s) {
    printf("Name: %s, Roll: %d\n", s.name, s.roll);
}
int main() {
    struct Student s;
    printf("Enter name and roll: ");
    scanf("%s %d", s.name, &s.roll);
    display(s);
    return 0;
}
