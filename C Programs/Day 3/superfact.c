#include<stdio.h>

int main() {

    int fact,num,i,j , superFact=1;
    printf("Enter a number: ");
    scanf("%d" , &num);

    for(i=1;i<=num;i++) {
        fact =1;
        for(j=1;j<=i;j++) {
            fact *= j;
        }
        superFact *= fact;
    }

    printf("Super Factorial of %d is %d" , num , superFact);

    return 0;
}