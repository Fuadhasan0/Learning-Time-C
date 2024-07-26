#include<stdio.h>

double loanValens(double loan_amount,double intrest_rate,double Number_of_year,double total_amount,double monthly_amount);

int main(){

       double loan_amount, interest_rate, Number_of_year, total_amount, monthly_amount;

       printf("Enter the loan amount : ");
       scanf("%lf", &loan_amount);

       printf("Enter the interest rate : ");
       scanf("%lf", &interest_rate);

       printf("Number of year : ");
       scanf("%lf", &Number_of_year);

       loanValens(loan_amount, interest_rate, Number_of_year, total_amount, monthly_amount);

       return 0;
}

double loanValens(double loan_amount,double intrest_rate,double Number_of_year,double total_amount,double monthly_amount){

       total_amount = loan_amount + loan_amount * 35 / 100;
       monthly_amount = total_amount / (Number_of_year * 12);

       printf("Total amount : %lf.\n", total_amount);
       printf("Monthly amount : %lf.", monthly_amount);


}