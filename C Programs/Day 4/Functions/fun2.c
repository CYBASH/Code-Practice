// Argument Pass and No Return value

#include<stdio.h>

void number(int a) {
    printf("Double of %d is %d\n" , a , 2*a);
}


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d" , &num);
    number(num);

    return 0;
}