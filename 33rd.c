#include <stdio.h>
int main() {
    int n,rev=0,temp;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(rev==n) printf("Palindrome\n");
    else printf("Not palindrome\n");
    return 0;
}
