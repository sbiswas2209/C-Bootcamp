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
    int element;
    printf("Enter Element : ");
    scanf("%d", &element);
    int index = -1;
    for(i = 0 ; i < n ; i++){
        if(ar[i] == element){
            index = i;
            printf("Element found at index %d", index);
            break;
        }
    }
    if(index == -1){
        printf("Element not found!!!");
    }
    return 0;
}