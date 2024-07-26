#include<stdio.h>

int a;
static int b;

void func();

int main(){
       func();
       printf("A = %d.\n", a);
       printf("B = %d.\n", b);

       return 0;
}

void func(){
       a = a + 1;
       b = b + 1;
}