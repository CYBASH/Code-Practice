// No Argument and No Return Value.

#include<stdio.h>

void hi() {
    printf("Good morning students !!!!!!\n");
}

void number() {
    int num;
    printf("Enter a number: ");
    scanf("%d" , &num);
    printf("You have entered %d\n" , num);
}

int main() {
    hi();
    number();
    return 0;
}