#include<stdio.h>

double value_XY(double x_plus_y, double x_minus_y);

int main(){
       double x_plus_y, x_minus_y;

       printf("Enter the value of x + y : ");
       scanf("%lf", &x_plus_y);

       printf("Enter the value of x - y : ");
       scanf("%lf", &x_minus_y);

       value_XY(x_minus_y, x_plus_y);

       return 0;
}

double value_XY(double x_plus_y, double x_minus_y){
       double x, y;

       x = (x_minus_y + x_plus_y) / 2;
       y = (x_plus_y - x_minus_y) / 2;

       printf("Vlaue of X : %0.2lf\n", x);
       printf("Value of Y : %0.2lf\n", y);

}