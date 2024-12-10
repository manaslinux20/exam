#include <stdio.h>
#include <math.h>
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}
void decimalToBinary(int decimal) {
    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) printf("%d", binary[j]);
    printf("\n");
}
int main() {
    int choice, num;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter binary: ");
        scanf("%d", &num);
        printf("Decimal: %d\n", binaryToDecimal(num));
    } else {
        printf("Enter decimal: ");
        scanf("%d", &num);
        decimalToBinary(num);
    }
    return 0;
}
