#include<stdio.h>

void printNumber(int *are, int n);

int main(){
    int are[]={1, 2, 3, 4, 5, 6};
    printNumber(are, 6);

    return 0;
}

void printNumber(int *are, int n){
    for(int i=0; i<n; i++){
        printf("%d\t", are[i]);
    }
}