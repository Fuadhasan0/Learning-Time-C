#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x, y;
    printf("Enter X value : ",x);
    scanf("%d", &x);
    printf("Enter Y value : ", y);
    scanf("%d", &y);

    swap(x,y);
    printf("X = %d, & Y = %d.\n\n\n",x ,y);

    _swap(&x, &y);
    printf("X =%d, & Y= %d.\n",x ,y);

    return 0;
}

//call by value

void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a = %d, & b = %d\n", a, b);
}

//call by reference

void _swap(int *a, int *b){
    int t=*a;
    *a = *b;
    *b = t;
    printf("a = %d, & b = %d\n", *a, *b);
}