#include<stdio.h>
#include<string.h>


int main(){

    char firstName[]= "Fuad"; //ASCII value of 'F'
    char sacondName[]= "Hasan";  //ASCII value of 'H'

    printf("%d", strcmp(firstName, sacondName)); // strcmp, diffrent between 'F' &  'H'
}