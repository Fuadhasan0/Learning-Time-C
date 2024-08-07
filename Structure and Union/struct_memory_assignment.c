#include<stdio.h>

struct s1{
       int n; 
       double d;
       char ch;
};

struct s2{
       int n; 
       char ch;
       double d;
};

int main(){

       printf("Char size: %lu bytes.\t", sizeof(char));
       printf("Int size: %lu bytes.\t", sizeof(int));
       printf("Double size: %lu bytes.\n\n", sizeof(double));

       printf("S1 size: %lu bytes.\n", sizeof(struct s1));
       printf("S2 size: %lu bytes.\n", sizeof(struct s2));

       return 0;
}