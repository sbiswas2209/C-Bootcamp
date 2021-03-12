#include <stdio.h>

int main () {
   int  var = 20;
   int  *p;//Pointer
   p = &var;
   printf("Address of var variable: %x\n", &var  );
   printf("Address stored in p variable: %x\n", p );
   printf("Value of *p variable: %d\n", *p );
   return 0;
}