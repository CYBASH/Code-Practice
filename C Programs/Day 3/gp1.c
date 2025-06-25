// Geometric Progression Series: 0 0 7 6 14 12 21 18 ....
// It is a series which is a combination of generative series (Ex: 0,2,4,6,8...)

#include<stdio.h>

int main() {

    int n , six=0 , seven=0;
    printf("Enter n: ");
    scanf("%d" , &n);
    for(int i=1;i<=n;i++) {

        if(i%2 == 0) {
            printf("%d " , six);
            six+=6;
        } else {
            printf("%d " , seven);
            seven+=7;
        }
    }

    if(n%2 == 0) {
        printf("\n%dth term of series: %d" , n ,  six-6);
    } else {
        printf("\n%dth term of series: %d" , n ,  seven-7);
    }

    return 0;
}