#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n%5==0 && n%11==0)
        printf("Divisible by 5 and 11\n");
    else
        printf("Not divisible by 5 and 11\n");
    return 0;
}
