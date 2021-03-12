#include <stdio.h>
int main(){
    int n;
    printf("Enter Limit : ");
    scanf("%d", &n);
    int ar[100];
    if(n > 100){
        return 0;
    }
    int i = 0;
    for( i = 0 ; i < n ; i++){
        printf("Enter number : ");
        scanf("%d", &ar[i]);
    }
    printf("Output -->");
    for( i = 0 ; i < n ; i++){
        printf("%d  ", ar[i]);
    }
    return 0;
}