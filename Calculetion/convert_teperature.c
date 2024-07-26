#include<stdio.h>

double CtoF(double TotC, double resultC);
double FtoC(double TofF, double resultF);

int main(){

       double TofC, resultC;
       printf("Enter your temperature in C : ");
       scanf("%lf", &TofC);

       CtoF(TofC, resultC);

       double TofF, resultF;
       printf("Enter your temperature in F :");
       scanf("%lf", &TofF);

       FtoC(TofF, resultF);
       
       return 0;
}

double CtoF(double TofC, double resultC){

       resultC =  (TofC * 9) / 5  + 32;

       printf("Temperature in Farenheit : %0.2lf\n", resultC);
}

double FtoC(double TofF, double resultF){

       resultF = ((TofF - 32) / 9) * 5;

       printf("Temperature of Celsius : %0.2lf\n", resultF);

}