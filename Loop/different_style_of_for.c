#include<stdio.h>

int diffFor(int n);

int main(){

       int n;
       printf("Enter a number : ");
       scanf("%d", &n);

       diffFor(n);

       return 0;
}

int diffFor(int n){

       int i = 0;

       for( ; ; ){

              if(i>10){
                     break;
              }

              printf("%d X %d = %d\n", n, i, n*i);
              i++;
       }
}