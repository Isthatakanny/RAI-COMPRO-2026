#include <stdio.h>

int main() {
    struct student
    {
        char name[50];
        int age;
    };
    struct student students[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter student no.%d name: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter student no.%d age: ", i+1);
        scanf("%d", &students[i].age);
    }

    printf("Students with the age older than 20 are the follows: \n");

    for (int j = 0; j < 10; j++) {
        if (students[j].age > 20) {
            printf("%s (age: %d)\n", students[j].name, students[j].age);
        }
    }
}