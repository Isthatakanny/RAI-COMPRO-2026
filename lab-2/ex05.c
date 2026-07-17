#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    char uni[50];

    printf("Enter your full name: ");
    scanf(" %[^\n]",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your Height: ");
    scanf("%f",&height);
    printf("Enter your University name: ");
    scanf("%s",uni);

    printf("Hi! Everyone. This is %s from %s. I am %d years old and my height is %.1f cm tall.\n",name, uni, age, height);
}