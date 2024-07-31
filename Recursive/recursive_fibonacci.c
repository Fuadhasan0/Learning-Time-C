#include<stdio.h>
#include<string.h>

int f_call = 0;
int fib[50];

int fit(int n);

int main(){

       int n;
       char s[3];

       fib[1] = 1;
       fib[2] = 1;

       printf("Enter number ~\n");
       scanf("%d", &n);

       if(n == 1){
              strcpy(s, "st");
       }
       else if(n == 2){
              strcpy(s, "nd");
       }
       else if (n == 3){
              strcpy(s, "rd");
       }
       else{
              strcpy(s, "th");
       }

       printf("%d%s fibonacci number is %d.\n", n, s, fit(n));
       printf("Number of function call : %d.\n", f_call);

       for(int i=1; i<=n; i++){
              printf("%d : %d\n", i, fib[i]);
       }

       return 0;
}

int fit(int n){
       f_call = f_call + 1;

       if(fib[n] != 0){
              return fib[n];
       }

       if(n == 1 || n == 2){
              return fib[n];
       }

       fib[n] = fit(n-1) + fit(n-2);

       return fib[n];
}
