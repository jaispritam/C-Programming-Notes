2.15 Diameter Given → Find Area

👉 Distance between (2,2) and (5,6) = diameter

#include <stdio.h>
#include <math.h>

int main() {
    float x1=2,y1=2,x2=5,y2=6;
    float d, r, area;

    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    r = d/2;

    area = 3.14 * r * r;

    printf("Area = %f", area);

    return 0;
}
