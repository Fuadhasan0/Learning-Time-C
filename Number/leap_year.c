#include<stdio.h>


int main(){
       int year;
       printf("Enter year\n~ ");
       scanf("%d", &year);

       if(year % 4 == 0){
       if(year % 100 == 0){
       if(year % 400 == 0){
              printf("%d is a leap year.\n", year);
       }
       else{
              printf("%d isn't a leap year.", year);
       }
       }
       else{
              printf("%d is a leap year.", year);
       }
       }
       else{
              printf("%d isn't a leap year.", year);
       }


       return 0;
}
