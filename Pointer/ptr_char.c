#include<stdio.h>

int main(){
       char c1 = 'A', c2 = 'B', c3 = 'C', c4 = 'D';
       char *p1 = &c1, 
            *p2 = &c2, 
            *p3 = &c3, 
            *p4 = &c4;

       printf("%c\t%c\t%c\t%c", *p1, *p2, *p3, *p4); // why use this(*)?

}