#include<stdio.h>

double valueOf_X_Y(double a1,double b1,double c1,double a2,double b2,double c2);

int main(){
       double a1, a2, b1, b2, c1, c2;

       printf("Enter the value of a1 : ");
       scanf("%lf", &a1); 

       printf("Enter the value of b1 : ");
       scanf("%lf", &b1); 

       printf("Enter the value of c1 : ");
       scanf("%lf", &c1); 

       printf("Enter the value of a2 : ");
       scanf("%lf", &a2); 

       printf("Enter the value of b2 : ");
       scanf("%lf", &b2); 

       printf("Enter the value of c2 : ");
       scanf("%lf", &c2); 

       valueOf_X_Y(a1, a2, b1, b2, c1, c2);

       return 0;
}

double valueOf_X_Y(double a1,double b1,double c1,double a2,double b2,double c2){

       double x, y, d;

       d = b2*c1 - b1*c2;

       if((int) d == 0){
              printf("Value of X and y cna not be determined.\n");
       }
       else{
              x = d / (a1*b2 - a2*b1);
              y = d / (a1*b2 - a2*b1);

              printf("Value of X : %0.2lf\n", x);
              printf("Value of y : %0.2lf", y);

       }
}