#include<stdio.h>

int whileLoop(int a);


int main(){
  int a;
  printf("Enter a value : ");
  scanf("%d", &a);

   whileLoop(a);

  return 0;
}

int whileLoop(int a){

  int i =0;

  while( i<a){
    i++;
    printf("Number is : %d\n", i);
  }
}