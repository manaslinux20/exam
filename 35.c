#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    float price;
};
int main() {
    struct Book b = {"C Programming", "Dennis Ritchie", 299.99};
    printf("Book: %s, Author: %s, Price: %.2f\n", b.title, b.author, b.price);
    return 0;
}
