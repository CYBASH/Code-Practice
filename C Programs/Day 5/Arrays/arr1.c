// Maximum and Minimum element of an array

#include<stdio.h>

int main() {

    int arr[10];
    int max , min;

    printf("Enter the array: ");
    for(int i=0;i<10;i++)
        scanf("%d" , &arr[i]);

    max = arr[0];
    min = arr[0];
    for(int i=1;i<10;i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum number of array: %d\n" , max);
    printf("Minimum number of array: %d\n" , min);

    return 0;
}