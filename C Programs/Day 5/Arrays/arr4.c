// Cyclic Shifting of array elemnts

#include<stdio.h>

int main() {

    int arr[20],temp[20] , n,key , start_ele,i,j;

    printf("Enter number of elements: ");
    scanf("%d" , &n);

    printf("Enter %d elements: " , n);
    for(int i=0;i<n;i++) {
        scanf("%d" , &arr[i]);
    }

    printf("Enter number of shifts: ");
    scanf("%d" , &key);

    for(i=0;i<key;i++) {
        start_ele = arr[0];
        for(j=0;j<n-1;j++) {
            arr[j] = arr[j+1];
        }
        arr[j] = start_ele;
    }

    printf("Array after %d shifting: " , key);
    for(int i=0;i<n;i++) {
        printf("%d " , arr[i]);
    }


    return 0;
}