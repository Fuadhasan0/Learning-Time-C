#include<stdio.h>

int value_of_gcd(int a, int b, int gcd);

int main(){

       int a, b, gcd;

       printf("Enter value of A : ");
       scanf("%d", &a);
       printf("Enter value of B : ");
       scanf("%d", &b);

       value_of_gcd(a, b, gcd);

       return 0;
}

int value_of_gcd(int a, int b, int gcd){

       int x, t;

       if(a == 0){
              gcd = a;
       }
       else if(b == 0){
              gcd = 0;
       }
       else{
              while (b != 0)
              {
                     t = b;
                     b = a % b;
                     a = t;
              }
              
              gcd = a;
       }

       printf("GCD is %d.\n", gcd);
}