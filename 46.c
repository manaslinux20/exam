#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2); // Concatenate
    strcpy(str2, str1); // Copy
    printf("Concatenated: %s\n", str1);
    printf("Copied String 1 to String 2: %s\n", str2);
    return 0;
}
