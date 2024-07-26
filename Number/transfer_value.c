#include<stdio.h>

int test_function(int x);

int main(){

       int x, y, z;

       printf("Enter value of X : ");
       scanf("%d", &x);

       printf("Enter value of Y : ");
       scanf("%d", &y);

       printf("Enter value of Z : ");
       scanf("%d", &z);

       z = test_function(x);

       printf("X is : %d.\nY is : %d.\nZ is : %d.\n", x, y, z);

       return 0;
}

int test_function(int x){

       int y = x;
       x = 2 * y;
       return (x*y);
}