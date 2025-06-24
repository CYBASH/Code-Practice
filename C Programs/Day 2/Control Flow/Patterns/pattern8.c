//Pascal Triangle

#include<stdio.h>

int main() {

    int n , i ,j;
    printf("Enter the size: ");
    scanf("%d" , &n);

    for(i=0 ; i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            printf(" ");
        }
        int value = 1;
        for(j=0;j<=i;j++) {
            printf("%d " , value);
            // printf("* ");
            value = value * (i-j)/(j+1);
        }

        printf("\n");
    }
    return 0;
}