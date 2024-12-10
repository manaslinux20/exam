#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    FILE *file = fopen("students.txt", "a");
    struct Student s;
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name and marks: ");
        scanf("%s %d", s.name, &s.marks);
        fprintf(file, "%s %d\n", s.name, s.marks);
    }
    fclose(file);
    printf("Data appended to file.\n");
    return 0;
}
