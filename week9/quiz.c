#include <stdio.h>

struct address {
    char street[50];
    char district[50];
};

struct info {
    char full_name[50];
    int id;
    char tel[50];
    struct address addr;
};

int main() {
    struct info personA;
    printf("Enter your full name: ");
    scanf(" %[^\n]", personA.full_name);
    printf("Enter your ID: ");
    scanf(" %d", &personA.id);
    printf("Enter street address: ");
    scanf(" %[^\n]", personA.addr.street);
    printf("Enter district address: ");
    scanf(" %[^\n]", personA.addr.district);
    printf("Enter mobile telephone number: ");
    scanf(" %[^\n]", personA.tel);

    printf("Full name: %s, ID: %d \nAddress: %s\n%s,\n\nTel: %s\n", personA.full_name, personA.id, personA.addr.street, personA.addr.district, personA.tel);
}