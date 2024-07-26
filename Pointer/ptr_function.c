#include<stdio.h>

void squer(int n);
void _squer(int *n);


int main(){
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    squer(number);
    printf("Number : %d\n", number);

    _squer(&number);
    printf("S number : %d\n", number);
    
}

void squer(int n){
    n = n * n;
    printf("Squer is %d\n", n);
}

void _squer(int *n){
    *n =(*n) * (*n);
    printf("_Squer is %d\n", *n);
}