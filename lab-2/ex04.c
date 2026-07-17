#include <stdio.h>

int main() {
    char name[50];
    int studentid;
    float proscore;
    float physscore;
    float calcscore;
    float gpa;

    printf("Enter your Name: ");
    scanf(" %s", name);
    printf("Enter your student ID: ");
    scanf("%d",&studentid);
    printf("Enter your Programming score: ");
    scanf("%f",&proscore);
    printf("Enter your Physics score: ");
    scanf("%f",&physscore);
    printf("Enter your Calculus score: ");
    scanf("%f",&calcscore);

    gpa = (proscore + physscore + calcscore)/3;

    printf("Hi %s (%d)! Your GPA is %.2f\n", name, studentid, gpa);


    return 0;
}