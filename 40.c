#include <stdio.h>
int main() {
    int a = 5; float b = 5.5; char c = 'A';
    printf("Address of int: %p, float: %p, char: %p\n", &a, &b, &c);
    return 0;
}
