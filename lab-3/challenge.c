#include <stdio.h>

int main() {
    int calcscore, physscore, comproscore;
    char g1, g2, g3;
    float numg1, numg2, numg3, gpa;

    printf("Calculus score: ");
    scanf("%d", &calcscore);
    printf("Physics score: ");
    scanf("%d", &physscore);
    printf("compro score: ");
    scanf("%d", &comproscore);

    if (calcscore >= 80) {
        g1 = 'A';
        numg1 = 4;
    } else if (calcscore >= 70 && calcscore < 80) {
        g1 = 'B';
        numg1 = 3;
    } else if (calcscore >= 60 && calcscore < 70){
        g1 = 'C';
        numg1 = 2;
    } else if (calcscore >= 50 && calcscore < 60){
        g1 = 'D';
        numg1 = 1;
    } else {
        g1 = 'F';
        numg1 = 0;
    }

    if (physscore >= 80){
        g2 = 'A';
        numg2 = 4;
    }else if (physscore >= 70 && physscore < 80){
        g2 = 'B';
        numg2 = 3;
    }else if (physscore >= 60 && physscore < 70){
        g2 = 'C';
        numg2 = 2;
    }else if (physscore >= 50 && physscore < 60){
        g2 = 'D';
        numg2 = 1;
    }else{
        g2 = 'F';
        numg2 = 0;
    }

    if (comproscore >= 80){
        g3 = 'A';
        numg3 = 4;
    }else if (comproscore >= 70 && comproscore < 80){
        g3 = 'B';
        numg3 = 3;
    }else if (comproscore >= 60 && comproscore < 70){
        g3 = 'C';
        numg3 = 2;
    }else if (comproscore >= 50 && comproscore < 60){
        g3 = 'D';
        numg3 = 1;
    }else{
        g3 = 'F';
        numg3 = 0;
    }


    gpa = (numg1 + numg2 + numg3) / 3;

    printf("\n");
    printf("Subject\t\tScore\tGrade\tGrade\n");
    printf("----------------------------------------\n");
    printf("Calculus\t%d\t%c\t%.1f\n", calcscore, g1, numg1);
    printf("Physics\t\t%d\t%c\t%.1f\n", physscore, g2, numg2);
    printf("Compro\t\t%d\t%c\t%.1f\n", comproscore, g3, numg3);

    printf("\nGPA: %.1f\n", gpa);
}