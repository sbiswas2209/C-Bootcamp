/*
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter limit : ");
    scanf("%d", &n);
    int i, j, coeff;
    for(i=1;i<=n;i++){
        coeff=1;
        for(j=0;j<(n-i);j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ", coeff);
            coeff = coeff * (i-j)/j;
        }
        printf("\n");
    }
    return 0;
}