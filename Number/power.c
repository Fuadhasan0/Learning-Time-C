#include<stdio.h>
#include<math.h>

int main(){
    double n;
    printf("Enter number :");
    scanf("%lf", &n);

    double power;
    printf("Enter number of power : ");
    scanf("%lf", &power);

    int result = pow(n, power);

    printf("Answer is %lf\n", pow(n, power));
    return 0;
}