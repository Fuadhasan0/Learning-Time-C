#include<stdio.h>

int main(){

       int a, b, c;

       for(a=1; a<=2; a++){
              for(b=1; b<=2; b++){
                     for(c=1; c<=3; c++){
                            printf("%d, %d, %d.\n", a, b, c);
                     }
              }
       }

       return 0;
}