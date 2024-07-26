#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;

    printf("%d\n", &age); // all not work

    printf("%p\n", ptr); // right system

    printf("%u\n", &ptr); // easy to read
}