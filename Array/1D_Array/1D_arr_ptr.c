#include<stdio.h>

int main(){
    int addar[5];

    //input
    int *ptr = &addar[0];
    for(int i=0; i<5; i++){
    printf("%d index : ", i);
    scanf("%d", &addar[i]);
}

    //output
    for(int i=0; i<5; i++){
        printf("%d index :%d\n", i, &addar[i]);
    }

    return 0;
}