#include <stdio.h>
#include <math.h>
int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("Result = %.0f\n", pow(base, exp));
    return 0;
}
