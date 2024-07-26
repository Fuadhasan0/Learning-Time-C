#include<stdio.h>
   
   int sum(int a, int b);
   void printtable();

int main(){
  int n;
  printf("Enter n number : ");
  scanf("%d", &n);

  int a, b;
  printf("Enter a number : ");
  scanf("%d", &a);

  printf("Enter b number : ");
  scanf("%d", &b);

  
  int s = sum(a, b);
  printf("Sum is: %d\n\n",s);
  printtable(n);

  return 0;
}

  int sum( int x, int y){
    return x + y;
    
  }
  void printtable(int n){
     for( int i=1; i<=5; i++ ){

        printf("%d\n", i*n);

    }
  }