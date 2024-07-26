#include<stdio.h>

char letterCheck(char let);

int main()
{
   char let;
   printf("Enter a number : ");
   scanf("%c", &let);

   letterCheck(let);

   return 0;
}

char letterCheck(char let){

       if(let >= 'a' && let <= 'z'){
              printf("%c is lower case.\n", let);
       }

       else if(let >= 'A' && let <= 'Z'){
              printf("%c is upper case.\n", let);
       }
}