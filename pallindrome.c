#include <stdio.h>
int main(){
    int n;
    printf("Enter Number to check : ");
    scanf("%d", &n);
    int rev = 0;
    int temp = n;
    while(temp > 0){
        rev = temp%10 + rev*10;
        temp /= 10;
    }
    if(rev == n){
        printf("%d is a pallindrome number", n);
    }
    else{
        printf("%d is a not pallindrome number", n);
    }
    return 0;
}