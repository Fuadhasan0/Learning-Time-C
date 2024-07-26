#include<stdio.h>

int printArr(int* arr);

int main(){

       int arr[]= {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

       printArr(arr);

       return 0;

}       

int printArr(int* arr){

       //While Loop

       int i = 0;
       while (i<10)
       {
              printf("%dth element is : %d.\n", i+1, arr[i]);
              i++;
       }
       /*

       For Loop

       for(int i=0; i<10; i++){
              printArr("%dth element is %d.\n", i+1, arr[i]);
       }

       Reverse print

       int i = 9;
       while (i>=0)
       {
              printf("%dth element is : %d.\n", i-1, arr[i]);
              i--;
       }
        
       */
}