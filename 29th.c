#include <stdio.h>
int main() {
    char ch;
    printf("Enter character: ");
    scanf(" %c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("Alphabet\n");
    else
        printf("Not alphabet\n");
    return 0;
}
