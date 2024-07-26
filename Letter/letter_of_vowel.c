#include<stdio.h>

char vowelCheck(char ch);

int main(){

       char ch;
       printf("Enter a Letter : ");
       scanf("%c", &ch);

       vowelCheck(ch);

       return 0;
}

char vowelCheck(char ch){

       if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch =='A' || ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U'){
              printf("%c is vowel.\n", ch);
       }
       else{
              printf("%c is consonant.\n", ch);
       }
}