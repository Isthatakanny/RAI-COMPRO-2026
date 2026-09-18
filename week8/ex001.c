#include <stdio.h>

int main() {
    struct book 
    {
        char name[50];
        float price;
        float discount;
    };

    struct book book1;

    printf("Enter book name: ");
    scanf("%[^\n]", book1.name);
    printf("Enter book price: ");
    scanf("%f", &book1.price);

    book1.discount = book1.price * 0.1;

    printf("Book: %s \n", book1.name);
    printf("Price: %.2f \n", book1.price);
    printf("Discount 10 percent: %.2f \n", book1.discount);
    printf("Total: %.2f \n", book1.price - book1.discount);

}