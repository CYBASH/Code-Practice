// nivens number / harshd number

#include<stdio.h>

int main() {

    int num , temp , sum=0;
    printf("Enter a number: ");
    scanf("%d" , &num);
    temp = num;
    while(temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if(num%sum == 0) {
        printf("%d is a niven number\n" , num);
    } else {
        printf("%d is not a niven number\n" , num);
    }

    return 0;
}