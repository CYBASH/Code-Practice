// Floyd Triangle

#include<stdio.h>

int main() {

    int n , i ,j,count=1;
    printf("Enter the size: ");
    scanf("%d" , &n);

    for(i=0;i<n;i++) {
        for(j=0;j<=i;j++) {
            printf("%d " , count++);
        }
        printf("\n");
    }
    return 0;
}