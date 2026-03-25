
2.11 Area of Triangle (Heron’s Formula)
#include <stdio.h>
#include <math.h>

int main() {
    float a=3, b=4, c=5;
    float s, area;

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area = %f", area);

    return 0;
}
