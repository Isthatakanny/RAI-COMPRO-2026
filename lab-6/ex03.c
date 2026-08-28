#include <stdio.h>
#include <math.h>

struct coords
{
    float x;
    float y;
};

int main() {
    struct coords pos1, pos2;

    printf("x1: ");
    scanf(" %f", &pos1.x);
    printf("y1: ");
    scanf(" %f", &pos1.y);
    printf("x2: ");
    scanf(" %f", &pos2.x);
    printf("y2: ");
    scanf(" %f", &pos2.y);


    float distance = sqrt(pow(pos2.x - pos1.x, 2) + pow(pos2.y - pos1.y, 2));
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)",
    pos1.x, pos1.y, pos2.x, pos2.y, distance);
    
}