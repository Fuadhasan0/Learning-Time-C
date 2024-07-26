#include <stdio.h>

void arr_to_arr(int arr[12], int arr2[12]);

int main(){
    int arr[12] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 8, 9, 10};
    int arr2[12];

    arr_to_arr(arr, arr2);

    return 0;
}

void arr_to_arr(int arr[12], int arr2[12]){
    int i = 0, j = 9;

    for(; i < 10; i++, j--){
        arr2[i] = arr[i];
    }
    for(i = 0; i < 10; i++){
        arr[i] = arr2[i];
    }
    for(i = 0; i < 10; i++){
        printf("%dth is : %d\n", i+1, arr[i]);
    }
}
