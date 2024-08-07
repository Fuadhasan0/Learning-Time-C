#include<stdio.h>
#include<string.h>

int main(){

       struct student {
              int id; 
              char name[40];
       };

       struct student one;

       one.id = 1; 
       strcpy(one.name, "Fuad Hasan");

       printf("Id: %d\tName: %s.\n", one.id, one.name);

       return 0;
}