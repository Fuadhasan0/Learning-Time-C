#include<stdio.h>
#include<string.h>

int main(){
       char saarc[7][100] = {
              "Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"
       };

       int row, col;

       for(row=0; row<7; row++){
              int name_length = strlen(saarc[row]);
              for(col=0; col<name_length; col++){
                     printf("%c", saarc[row][col]);
              }
              printf("\n");
       }

       printf("\nRow and Colume ~\n\n");

       for(row=0; row<7; row++){
              int name_length = strlen(saarc[row]);
              for(col=0; col<name_length; col++){
                     printf("(%d, %d) = %c   ", row, col, saarc[row][col]);
              }
              printf("\n");
       }

       return 0;
}
