#include<stdio.h>

int main(){

       int who_many_namta_for_num, who_many_time_matli;

       printf("Enter who many namta for number ~\n"); // row
       scanf("%d", &who_many_namta_for_num);

       printf("Enter who many time malti ~\n"); // colume
       scanf("%d", &who_many_time_matli);

       int namta[who_many_namta_for_num][who_many_time_matli];
       int row, col;

       for(row=0; row<who_many_namta_for_num; row++){
              for(col=0; col<who_many_time_matli; col++){
                     namta[row][col] = (row + 1) * (col + 1);
              }
       }

       for(row=0; row<who_many_namta_for_num; row++){
              printf("%dth namta ~\n\n", row + 1);

              for(col=0; col<who_many_time_matli; col++){
                     printf("%d X %d : %d\n", row + 1, col + 1, namta[row][col]);
              }
              printf("\n");
       }

       return 0;
}
