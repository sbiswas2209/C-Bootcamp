#include <stdio.h>

int sum = 1;
int a = 1,b = 1;

void display(int n){
    if(n == 0){
        return;
    }
    else{
        printf("%d ", sum);
        sum = a+b;
        a = b;
        b = sum;
        display(n-1);
    }
}

int main(){
    int n;
    printf("Enter limit : ");
    scanf("%d", &n);
    int a = 1, b = 1, sum = 1;
    printf("0 1 ");
    n-=2;
    display(n);
    return 0;
}