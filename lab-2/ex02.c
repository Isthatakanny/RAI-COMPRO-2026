#include <stdio.h>

int main() {
    int inmin;
    int hr;
    int min;

    printf("Enter total minutes: ");
    scanf("%d",&inmin);

    hr = inmin/60;
    min = inmin%60;

    printf("%d %s %d %s %d %s\n",inmin,"minutes is",hr," hour(s) and ",min," minute(s)");
    
    return 0;
}