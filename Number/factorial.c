#include<stdio.h>

float fac(float n);

int main(){

    float n;
    printf("Enter number : ");
    scanf("%f", &n);

    printf("Total factorial is %f.\n", fac(n));

}

 float fac(float n){
    if(n == 1){
        return 1;
    }

    float sum = 1;
    float facN= fac(n-1);
    float facF = facN * n;

    return facF;
 }