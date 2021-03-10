/*
*
**
***
****
*****

USING RECURSION
*/
#include <stdio.h>
void drawRow(int num) 
{ 
    if (num == 0) 
        return; 
    printf("*");
    drawRow(num - 1); 
} 
void draw(int n, int i) 
{ 
    if (n == 0) 
        return; 
    drawRow(i);
    printf("\n");
    draw(n - 1, i + 1); 
} 
int main(){
    int n;
    printf("Enter Limit : ");
    scanf("%d", &n);
    draw(n,1);
    return 0;
}