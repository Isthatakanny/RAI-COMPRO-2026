#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    int weight;
    char gender[2];
    char eq[50];

    printf("Enter your Name: ");
    scanf("%s",name);

    printf("Enter your Age: ");
    scanf("%d",&age);

    printf("Enter your height: ");
    scanf("%f",&height);

    printf("Enter your weight: ");
    scanf("%d",&weight);

    printf("Enter your gender: ");
    scanf("%s",gender);

    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", eq);

    printf("\nName: %s", name);
    printf("\n%s %d","Age: ",age);
    printf("\n%s %s","Gender: ",gender);
    printf("\n%s %.1f","Height: ",height);
    printf("\n%s %d","Weight: ",weight);
    printf("\nEducation %s ",eq);

    return 0;
}