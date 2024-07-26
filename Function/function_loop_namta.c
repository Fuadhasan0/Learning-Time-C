#include<stdio.h>

int maltiNumF(int n);
int maltiNumW(int n);

int main(){

       int n;
       printf("Enter a number : ");
       scanf("%d", &n);

       maltiNumF(n);
       maltiNumW(n);

       return 0;
}

int maltiNumF(int n){

       printf("For Loop:\n\n");

       for(int i=0; i<=10; i++){

              printf("%d X %d = %d\n", n, i, n*i);
       }

       printf("For loop end.\n\n");

       //maltiNumW(n); function call function
}

int maltiNumW(int n){

       printf("While Loop:\n\n");

       int i=0;
       while(i<=10){

              printf("%d X %d = %d\n", n, i, n*i);
              i++;
       }

       printf("While loop end.");
       
}