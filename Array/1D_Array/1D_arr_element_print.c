#include<stdio.h>

int main(){

       int area[10]={1, 2, 3, 4, 5};

       area[1]=10;
       area[2]=20;
       area[3]=30;

       printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", area[0], area[1], area[2], area[3],area[4], area[-1], area[50]);

       return 0;
}