#include <stdio.h>
int main(){
    int ar[100];
    printf("Enter number of elements : ");
    int n;
    scanf("%d", &n);
    if(n<0 || n>100){
        return 0;
    }
    double sum = 0;
    int i=0;
    for(i=0;i<n;i++){
        printf("Enter element %d : ", (i+1));
        scanf("%d", &ar[i]);
    }
    for(i=0;i<n;i++){
        sum += ar[i];
    }
    printf("Average is %0.2f", (sum/n));
    return 0;
}