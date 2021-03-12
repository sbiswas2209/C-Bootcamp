#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int *first = &a;
    int *second = &b;
    int sum = *first + *second;
    printf("Sum is : %d", sum);
    return 0;
}