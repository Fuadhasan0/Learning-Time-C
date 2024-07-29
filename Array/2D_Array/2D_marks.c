#include<stdio.h>

int main(){

       int student=10, exam=4;

       int sub_1_mark[4][10] = {
              {45, 65, 85, 95, 84, 34, 75, 84, 85, 46},
              {65, 76, 86, 75, 65, 87, 74, 96, 82, 49},
              {94, 85, 91, 83, 73, 62, 64, 94, 99, 30},
              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
       };

       printf("Subject 1 ~ \n\n");

       int col;
       for(col=0; col<10; col++){
              sub_1_mark[3][col] = sub_1_mark[0][col] / 4 + sub_1_mark[1][col] / 4 + sub_1_mark[2][col] / 2;
              printf("Roll NO. ~ %d\t Tolat Mark ~ %d.\n", col+1, sub_1_mark[3][col]);
       }

       printf("\n");

       int sub_2_mark[4][10] = { // here student number is 10
              {47, 63, 85, 95, 84, 34, 79, 84, 85, 56},// frist exam
              {65, 78, 86, 75, 65, 77, 74, 86, 82, 69},// second exam
              {91, 85, 99, 73, 75, 62, 66, 94, 99, 60},// final exam
              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
       };

       printf("Subject 2 ~\n\n");

       for(col=0; col<10; col++){
              sub_2_mark[3][col] = sub_2_mark[0][col] / 4 + sub_2_mark[1][col] / 4 + sub_2_mark[2][col] / 2;
              printf("Roll NO. ~ %d\t Tolat Mark ~ %d.\n", col+1, sub_2_mark[3][col]);
       }

       printf("\n");

       int final_mark[4][10];
       
       printf("Final marks ~\n\n");

       for(col=0; col<10; col++){
              final_mark[3][col] = ((sub_1_mark[0][col] + sub_2_mark[0][col]) / 4 + (sub_1_mark[1][col] + sub_2_mark[1][col]) / 4 + (sub_1_mark[2][col] + sub_2_mark[2][col]) / 2) / 2;
              printf("Roll NO. ~ %d\t Tolat Mark ~ %d.\n", col+1, final_mark[3][col]);
       }

       return 0;
}
