#include<stdio.h>



int main(){
    float price[3];
    printf("Enter 1st price :");
    scanf("%f", &price[0]);
    printf("Enter 2nd price :");
    scanf("%f", &price[1]);
    printf("Enter 3rd price :");
    scanf("%f", &price[2]);

    printf("Total 1st price :%f\n", price[0]+(0.25*price[0]));
    printf("Total 2nd price :%f\n", price[1]+(0.25*price[1]));
    printf("Total 3rd price :%f\n", price[2]+(0.25*price[2]));

    return 0;
}