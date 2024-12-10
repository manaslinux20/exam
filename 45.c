#include <stdio.h>
#include <string.h>
int stringLength(char str[]) {
    return strlen(str);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Length: %d\n", stringLength(str));
    return 0;
}
