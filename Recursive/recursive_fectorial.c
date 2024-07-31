#include<stdio.h>

int f_call = 0;

int factorial(int n);

int main(){
       int n, in;
       printf("Enter who many time you run this code ~\n");
       scanf("%d", &in);

       int i=0;
         
       while(i<in){
              i++;
              printf("Enter number ~ \n");
              scanf("%d", &n);

              printf("%d time ~\n", i);

       if(n < 0){
              printf("Please enter a positive number.\n");
       }

       printf("Factorial of %d is %d.\n\n", n, factorial(n));

       }

       printf("Number of function call : %d.\n", f_call);

       return 0;
}

int factorial(int n){

       f_call = f_call + 1;
       if(n == 0){
              return 1;
       }
       else{
              return n * factorial(n-1);
       }
}
