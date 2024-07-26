#include<stdio.h>

int main(){
    int n;
    printf("Welcome!\nEnter your number : ");
    scanf("%d", &n);

    if(n>=90 && n<=100){
        printf("You got A++.\nThank You.");
    }else if (n>=80 && n<90){
        printf("You got A+.\nThank You.");
    }else if(n>=70 && n<80){
        printf("You got A.\nThank You.");
    }else if(n>=60 && n<70){
        printf("You got A-.\nThank You.");
    }else if(n>=50 && n<60){
        printf("You got B.\nThank You.");
    }else if (n>=40 && n<50){
        printf("You got C.\nThank You.");
    }else if(n>=33 && n<40){
        printf("You got D.\nThank You.");
    }else if(n<33 && n>=0){
        printf("You are Fail.\nThank You so mush.");
    }else{
        printf("Enter a erong number.\nThank You so mush.");
    }
    return 0;
}
