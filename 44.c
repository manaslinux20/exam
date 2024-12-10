#include <stdio.h>
int main() {
    char str1[50], str2[50];
    printf("Enter string (scanf): ");
    scanf("%s", str1);
    printf("Enter string (gets): ");
    getchar(); gets(str2);
    printf("Scanf: %s, Gets: %s\n", str1, str2);
    return 0;
}
