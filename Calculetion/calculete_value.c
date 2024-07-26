#include<stdio.h>
 void price(float value);

     int main(){
             float value;
             printf("Enter your amount : ");
             scanf("%f", &value);

           price(value);
  
             printf("Value is : %f", value);

 }

 void price(float value){
     value = value + (0.25 * value);
     printf("Total is : %f\n",value);
 }