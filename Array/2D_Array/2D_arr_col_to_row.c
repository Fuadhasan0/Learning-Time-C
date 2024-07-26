#include<stdio.h>

int main()
{
       int array_1[4][4] = {
              {1, 2, 3, 4},
              {1, 2, 3, 4},
              {1, 2, 3, 4},
              {1, 2, 3, 4}
       };

       int array_2[4][4];
       int r, c;

       printf("Content of first array\n~\n");

       for(r=0; r<4; r++){
              for(c=0; c<4; c++){
                     printf("%d\t", array_1[r][c]);
              }
              printf("\n");
       }

       //now start copy
       for(r=0; r<4; r++){
              for(c=0; c<4; c++){
                     array_2[c][r] = array_1[r][c];              
              }
              printf("\n");
       }

       printf("Content of second array\n~\n");

       for(r=0; r<4; r++){
              for(c=0; c<4; c++){
                     printf("%d\t", array_2[r][c]);
              }
              printf("\n");
       }
       return 0;

}