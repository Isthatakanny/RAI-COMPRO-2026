#include <stdio.h>

    struct student
    {
        char name[100];
        int age;
        float score;
    };

int main() {
    struct student students[3];
    int index;
    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i+1);
        scanf(" %[^\n]", students[i].name);
        printf("Student %d's age: ", i+1);
        scanf(" %d", &students[i].age);
        printf("Student %d's score: ", i+1);
        scanf(" %f", &students[i].score);
    }
    float temp = students[0].score;
    for (int i = 0; i < 3; i++) {
        if (students[i].score > temp) {
            temp = students[i].score;
            index = i;
        }
    }
    printf("The highest score belongs to %s at %.1f scores!", students[index].name, temp);
}