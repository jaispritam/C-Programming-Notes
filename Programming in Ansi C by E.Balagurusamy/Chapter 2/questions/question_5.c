
2.5 Speed = Distance / Time
#include <stdio.h>

int main() {
    float distance, time, speed;

    printf("Enter distance and time: ");
    scanf("%f %f", &distance, &time);

    if(time == 0) {
        printf("Error: Time cannot be zero\n");
    } else {
        speed = distance / time;
        printf("Speed = %f\n", speed);
    }

    return 0;
}
