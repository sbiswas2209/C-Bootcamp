/*
1
2
3
4
5
6
7
8
9
10
*/
#include <stdio.h>
void count(int n){
    if(n==0){
        return;
    }
    count(n-1);
    printf("%d\n", n);
}
int main(){
    int num;
    printf("Enter limit : ");
    scanf("%d", &num);
    count(num);
}