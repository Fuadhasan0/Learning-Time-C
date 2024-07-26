#include<stdio.h>

int dara(int n);

int main(){

       int n, sum;
       printf("Enter last number of dara : ");
       scanf ("%d", &n);

       dara(n);

       return 0;
}

int  dara(int n){

       int sum = 0;

       for(int i = 0; i<=n; i++){
              sum = sum + i;
       }

       printf("Summetion is %d.\n", sum);
}