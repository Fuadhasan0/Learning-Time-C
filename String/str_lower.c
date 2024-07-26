#include<stdio.h>
#include <ctype.h>// tolower for lowercase

int main(){

       char name[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
       int i, length;

       printf("%s\n", name);

       length = 10;

       
       for(i=0; i<length; i++){
              name[i] = tolower(name[i]);
       }

       printf("%s\n", name); 

       return 0;
}