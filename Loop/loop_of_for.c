#include<stdio.h>

int forLoop(int a);


int main(){
  int a;
  printf("Enter a number : ");
  scanf("%d", &a);

  forLoop(a);

  return 0;

}

int forLoop(int a){
  for(int i=0; i<a; i++){
    printf("Number is : %d\n", i);
  }
}