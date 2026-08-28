#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int id;
    int math, english, science, history;
    float average;
};

int main() {
    struct student students[3];
    int index;

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d: \n", i+1);
        scanf("%s %d %d %d %d %d", students[i].name, &students[i].id, &students[i].math,
        &students[i].english, &students[i].science, &students[i].history);
        students[i].average = (students[i].math + students[i].english + 
        students[i].science + students[i].history) / 4;
    }
    printf("Student Averages: \n");
    for (int i = 0; i < 3; i++) {
        printf("%s (ID:%d): %.2f \n", students[i].name, students[i].id, students[i].average);
    }
    float temp = students[0].average;

    for (int i = 0; i < 3; i++) {
        if (students[i].average > temp) {
            temp = students[i].average;
            index = i;
        }
    }
    float mathtotal, engtotal, scitotal, histotal;

    printf("\nTop Student: %s with %.2f\n", students[index].name, students[index].average);
    printf("Subject Averages: \n");
    for (int i = 0; i < 3; i++) {
        mathtotal += students[i].math;
        engtotal += students[i].english;
        scitotal += students[i].science;
        histotal += students[i].history;
    }
    printf("Math: %.2f\n", mathtotal/4);
    printf("English: %.2f\n", engtotal/4);
    printf("Science: %.2f\n", scitotal/4);
    printf("History: %.2f\n", histotal/4);

    float allavg[4] = {mathtotal/4, engtotal/4, scitotal/4, histotal/4};
    float tempavg = mathtotal/4;
    for (int i = 0; i < 4; i++) {
        if (allavg[i] > tempavg) {
            tempavg = allavg[i];
            index = i;
        }
    }
    char subject[10];
    switch (index)
    {
    case 0:
        strcpy(subject, "Math");
        break;
    case 1:
        strcpy(subject, "English");
        break;
    case 2: 
        strcpy(subject, "Science");
        break;
    case 3:
        strcpy(subject, "History");
        break;
    default:
        break;
    }

    printf("Top Subject: %s with average of %.2f", subject, tempavg);
}

