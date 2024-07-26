#include<stdio.h>

int main(){

       int arr[] = {1, 2, 3, 4, 5};
       int sum = 0;

       int length = sizeof(arr) / sizeof(arr[0]);

       for(int i=0; i<length; i++){
              sum += arr[i];
       }

       printf("The sum of arr\n~%d\n", sum);
}