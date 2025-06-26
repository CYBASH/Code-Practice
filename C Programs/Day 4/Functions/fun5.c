// Nested Functions

#include<stdio.h>

int calc(int a) {
    printf("Square of %d is %d\n" , a , a*a);
    return a*a; 
}

int input() {
    int x;
    printf("Enter the value: ");
    scanf("%d" , &x);
    return calc(x);
}

int main() {
    printf("Square in main function is %d\n" , input());

    return 0;
}