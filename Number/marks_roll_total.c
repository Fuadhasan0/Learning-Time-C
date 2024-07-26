#include<stdio.h>

int main(){

       int ft_mark[5] = {83, 90, 80, 85, 88};
       int st_mark[5] = {86, 91, 90, 87, 85};
       int final_mark[5] = {90, 95, 88, 89, 91};

       int i;
       double total_mark[5];

       for(i=0; i<5; i++){
              total_mark[i] = ft_mark[i] / 4.0 + st_mark[i] / 4.0 + final_mark[i] / 2.0;
       }
       for(i=0; i<5; i++){
              printf("Roll NO. : %d\tTotal mark : %0.0lf.\n", i+1, total_mark[i]);
       }

       return 0;
}