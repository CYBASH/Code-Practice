// No Argument with Return Value.

#include<stdio.h>

int sasidhar() {
    int n;
    printf("Enter a number: ");
    scanf("%d" , &n);
    return n;
}

int main() {
    int num=sasidhar();
    printf("Your value stored in function is %d\n" , num);
    return 0;
}