#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp[3] = {{1, "John", 5000}, {2, "Jane", 6000}, {3, "Doe", 5500}};
    for (int i = 0; i < 3; i++)
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    return 0;
}
