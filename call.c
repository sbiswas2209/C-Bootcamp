#include <stdio.h>
void incrByValue(int a){
    a+=1;
    printf("In function : %d\n", a);//<--
}
void incrByRef(int *a){
    *a+=1;
    printf("In function : %d\n", *a);
}
int main(){
    int num = 20;
    incrByValue(num);// By Value
    printf("Outside function : %d\n", num);
    incrByRef(&num);
    printf("Outside function : %d", num);
    return 0;
}