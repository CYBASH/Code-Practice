// Insert an element as given postion into an array.

#include<stdio.h>

int main() {

    int arr[100] ,n,ele,pos,temp,temp2;
    printf("Enter number of elements: ");
    scanf("%d" , &n);

    printf("Enter %d elements: " , n);
    for(int i=0;i<n;i++)
        scanf("%d" , &arr[i]);
    
    printf("Enter the element to insert: ");
    scanf("%d" , &ele);
    printf("Enter the postion to insert %d: " , ele);
    scanf("%d" , &pos);

    for(int i=n;i>pos-1;i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = ele;

    printf("Array after inserting %d at %drd postion: " , ele , pos);
    for(int i=0;i<n+1;i++) {
        printf("%d " , arr[i]);
    }

    return 0;
}