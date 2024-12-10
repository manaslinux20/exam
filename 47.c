#include <stdio.h>
#include <string.h>
int main() {
    char strings[5][50], temp[50];
    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) gets(strings[i]);

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }
    printf("Sorted strings:\n");
    for (int i = 0; i < 5; i++) printf("%s\n", strings[i]);
    return 0;
}
