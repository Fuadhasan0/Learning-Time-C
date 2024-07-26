#include<stdio.h>

int calcPercentage(int math, int science, int bangla);

int main(){
    int math;
    printf("Enter math number : ");
    scanf("%d", &math);
    int science;
    printf("Enter science number : ");
    scanf("%d", &science);
    int bangla;
    printf("Enter bangla number : ");
    scanf("%d", &bangla);

    printf("Total percentage : %d %.\n",calcPercentage( math, science, bangla));
}

int calcPercentage(int math, int science, int bangla){
    int sum = math + science + bangla;
    int malti = sum / 3;
    

    return malti;
}