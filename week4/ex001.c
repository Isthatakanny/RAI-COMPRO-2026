#include <stdio.h>

int main() {
    char name[100], surname[100];
    int lab, mid, final, total;

    printf("Enter your Name");
    scanf("%s", name);

    printf("Enter your Surname");
    scanf("%s", surname);

    printf("Enter your Score");
    printf("Laboratory: ");
    scanf("%d", &lab);
    printf("Midterm: ");
    scanf("%d", &mid);
    printf("Final: ");
    scanf("%d", &final);
    
    total = (lab + mid + final)/3;

    printf("Hello, %s %s",name,surname);
    printf("Total score is: %d", total);
}