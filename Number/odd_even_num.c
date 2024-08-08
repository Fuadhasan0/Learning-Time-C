#include<stdio.h>

int main(){
       
       int num, T, i=0;

       printf("Who many time you run this code?\n~ ");
       scanf("%d", &T);

       while(i<T){
              i++;
              printf("Enter a number\n~ ");
              scanf("%d", &num);

              if(num % 2 == 0){
                     printf("%d is a even.\n", num);
              }
              else{
                     printf("%d is a odd.\n", num);
              }
}

       return 0;
}
