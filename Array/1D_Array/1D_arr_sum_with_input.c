#include<stdio.h>

int count_sum_of_arr(int number[], int length);

int main(){
       
       //input array length

       int length;
       printf("Enter length of your array : ");
       scanf("%d", &length);

       int number[length];

       // input array element

       printf("Length of array is %d.Enter all element : \n\n", length);
       for(int i=0; i<length; i++){
              printf("Element of %dth is: ", i+1);
              scanf("%d", &number[i]);
       }

       int result = count_sum_of_arr(number, length);

       printf("\nThe sum of array is %d.\nThank You.", result);

       return 0;
}

// Summetion of array 

int count_sum_of_arr(int number[], int length){

       int sum = 0;

       for(int i=0; i<length; i++){
              sum += number[i];
       }

       return sum;
}