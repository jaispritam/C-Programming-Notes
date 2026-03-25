
2.14 Circle (Given Center and Point)

👉 Radius = distance from center to point

#include <stdio.h>
#include <math.h>

int main() {
    float x=4, y=5;
    float r, area, perimeter;

    r = sqrt(x*x + y*y);

    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;

    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);

    return 0;
}
