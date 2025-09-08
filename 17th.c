#include <stdio.h>
#define PI 3.1416
int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Circumference = %.2f\n", 2*PI*r);
    return 0;
}
