// Frequency of numbers in an array.

#include<stdio.h>

int main() {

    int arr[20], n,i,j,freq[10][1];

    printf("Enter number of elements: ");
    scanf("%d" , &n);

    printf("Enter %d elements in range (1-10): " , n);
    for(int i=0;i<n;i++) {
        scanf("%d" , &arr[i]);
    }

    for(i=0;i<10;i++) {
        freq[i][0] = 0;
    }

    for(i=0;i<n;i++) {
        freq[arr[i]-1][0] += 1;
    }

    for(i=0;i<10;i++) {
        if(freq[i][0] != 0) {
            printf("Frequency of %d is %d\n" , i+1 , freq[i][0]);
        }
    }

    return 0;
}