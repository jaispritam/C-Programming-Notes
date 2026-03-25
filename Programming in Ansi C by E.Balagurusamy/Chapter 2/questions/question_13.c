
2.13 Distance Between Two Points
#include <stdio.h>
#include <math.h>

int main() {
    float x1,y1,x2,y2,d;

    printf("Enter points: ");
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);

    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("Distance = %f", d);

    return 0;
}
