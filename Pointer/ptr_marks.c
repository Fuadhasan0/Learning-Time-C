#include<stdio.h>
#include<stdlib.h>

int main(){

       int *marks;
       int i, n;
       printf("Pleace enter the number of student\n~");
       scanf("%d", &n);

       //now allocate memory
       marks = (int *)malloc(sizeof(int) * n);

       printf("Enter the mark of each student\n\n");
       for(i=0; i<n; i++){
              printf("Enter\n~");
              scanf("%d", &marks[i]);
       }

       printf("Now here you can see the vlaues\n~\n");

       //now print the marks array
       for(i=0; i<n; i++){
              printf("Result\n~%d\n", marks[i]);
       }

       return 0;
}