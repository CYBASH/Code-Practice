// Exponent of a number (a^b) using nested functions

#include<stdio.h>
#include<math.h>


int power(int base , int exponent) {
    int result=1;
    for(int i=0;i<exponent;i++) {
        result *= base;
    }

    return result;
}

int power_result() {
    int a , b;
    printf("Enter base and exponent: ");
    scanf("%d %d" , &a,&b);
    return power(a,b);
}

int main() {

    int result = power_result();
    printf("Result: %d" , result);

    return 0;
}