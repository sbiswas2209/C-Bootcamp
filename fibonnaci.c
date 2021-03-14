#include <stdio.h>
int main(){
    int n;
    printf("Enter limit : ");
    scanf("%d", &n);
    int a = 1, b = 1, sum = 1;
    printf("0 1 ");
    n-=2;
    while(n-- > 0){
        printf("%d ", sum);
        sum = a+b;
        a=b;
        b=sum;
    }
    return 0;
}