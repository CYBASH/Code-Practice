// Krishnamurthy number / strong number

#include<stdio.h>

int main() {

    int num , sum=0 , temp , r , i , fact;
    printf("Enter a number: ");
    scanf("%d" , &num);
    temp = num;
    while(temp != 0) {
        r = temp % 10;
        i = 1;
        fact = 1;
        while(i <= r) {
            fact *= i++;
        }
        sum += fact;
        temp /= 10;
    }

    if(sum == num) {
        printf("%d is a Strong number\n" , num);
    } else {
        printf("%d is not a Strong number\n" , num);
    }

    return 0;
}