#include<stdio.h>

int main(){

       char name[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y', '\0'};
       char name1[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', '\0', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y', '\0'};

       printf("%s\n", name);
       printf("%s\n", name1);

       return 0;
}