#include<stdio.h>

void printLoop(char arr[]);


int main(){
     
     char firstName[]={'F','u','a','d','\0'};
     char lastName[]=" Hasan.";

     printLoop(firstName);
     printLoop(lastName);


    return 0;
}

void printLoop(char arr[]){

    for(int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
}