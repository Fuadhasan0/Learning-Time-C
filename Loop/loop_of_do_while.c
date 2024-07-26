#include<stdio.h>

int doWhileLoop(int a);


int main(){

  int a;
  printf("Enter a number :");
  scanf("%d", &a);

  doWhileLoop(a);

  return 0;

}


int doWhileLoop(int a){

  int i = 0;

  do{
    i++;
    printf("Number is : %d\n", i);
  }
  while(i<a);
}

