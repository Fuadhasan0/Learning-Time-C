#include<stdio.h>

int numPrint(int Enter);

int main()
{
       int Enter;
       printf("Enter a number : ");
       scanf("%d", &Enter);

       numPrint(Enter);

       return 0; 
}

int numPrint(Enter){

       int i = 0;
       while(i < Enter){
              i++;
              if(i % 2 == 0){
                     continue;
              }

              printf("Result is : %d\n", i);
              
       }
       
}