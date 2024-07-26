#include<stdio.h>
#include <ctype.h>// toupper for uppercase

int main(){

       char name[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
       int i, length;

       printf("%s\n", name);

       length = 10;

       
       for(i=0; i<length; i++){
              name[i] = toupper(name[i]);
       }

       printf("%s\n", name); 

       return 0;
}