
2.4 Compute x = a / (b - c)
⚠️ Important Logic
If b = c → division by zero (ERROR)
C Program
#include <stdio.h>

int main() {
    float a, b, c, x;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(b == c) {
        printf("Error: Division by zero\n");
    } else {
        x = a / (b - c);
        printf("x = %f\n", x);
    }

    return 0;
}
Given Cases

👉 (a) a=250, b=85, c=25
x = 250 / (85 - 25) = 250 / 60 = 4.1667

👉 (b) a=300, b=70, c=70
x = 300 / (0) → ❌ Undefined (Error)
