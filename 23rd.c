#include <stdio.h>
int main() {
    int n, prod=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        prod *= i;
    printf("Product = %d\n", prod);
    return 0;
}
