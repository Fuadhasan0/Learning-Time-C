#include<stdio.h>

//char sum_of_word(char* first_str, char* second_str, char* main_str, int length_1, int length_2);

int main(){

       int length_1;
       printf("Enter length of array\n~");
       scanf("%d", &length_1);

       char first_str[100];
       printf("Enter first word\n~");
       scanf("%s", first_str);

       int length_2;
       printf("Enter length of array\n~");
       scanf("%d", &length_2);

       char second_str[100];
       printf("Enter second word\n~");
       scanf("%s", second_str);

       char main_str[100];
       int j;

       for(int i=0, j=0; first_str[i] != '\0'; i++, j++){
              main_str[j] = first_str[i];
       }
       for(int i=0; second_str[i] != '\0'; i++, j++){
              main_str[j] = second_str[i];
       }

       main_str[j] = '\0';

       printf("Result is\n~%s", main_str);

       return 0;
}

/*char sum_of_word(char* first_str, char* second_str, char* main_str, int length_1, int length_2){

       int j;

       for(int i=0, j=0; i<length_1; i++, j++){
              main_str[j] = first_str[i];
       }
       for(int i=0; i<length_2; i++, j++){
              main_str[j] = second_str[i];
       }

       main_str[j] = '\0';

       return main_str[j];
}
*/