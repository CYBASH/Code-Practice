// Delete an element at given position in an array.

#include<stdio.h>

int main() {

    int arr[20] , n,pos,ele;

    printf("Enter number of elements: ");
    scanf("%d" , &n);

    printf("Enter %d elements: " , n);
    for(int i=0;i<n;i++) {
        scanf("%d" , &arr[i]);
    }

    printf("Enter the postion to delete element: ");
    scanf("%d" , &pos);
    ele = arr[pos-1];
    for(int i=pos-1;i<n;i++) {
        arr[i] = arr[i+1];
    }

    printf("Deleted %d\n" , ele);
    printf("Array after deleting %d position element: ");
    for(int i=0;i<n-1;i++) {
        printf("%d " , arr[i]);
    }

    return 0;
}