#include<stdio.h>

void func();

int main(){
       func();
       func();
       func();

       return 0;
}

void func(){
       int a = 10;
       static int s = 10; // static is main focus in this code

       a = a+2;
       s = s+2;

       printf("A = %d,\tS = %d.\n", a, s);
}