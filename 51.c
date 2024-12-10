#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    FILE *file = fopen("students.bin", "wb");
    struct Student students[3] = {{"Alice", 90}, {"Bob", 85}, {"Charlie", 92}};
    fwrite(students, sizeof(struct Student), 3, file);
    fclose(file);

    file = fopen("students.bin", "rb");
    struct Student s[3];
    fread(s, sizeof(struct Student), 3, file);
    for (int i = 0; i < 3; i++)
        printf("Name: %s, Marks: %d\n", s[i].name, s[i].marks);
    fclose(file);
    return 0;
}
