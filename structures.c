#include <stdio.h>
struct Car{
    int hp;
};
int main(){
    struct Car mercedes;
    struct Car bmw;
    mercedes.hp = 100;
    bmw.hp = 200;
    printf("Value in a : %d", mercedes.hp);
    printf("Value in b : %d", bmw.hp);
    return 0;
}