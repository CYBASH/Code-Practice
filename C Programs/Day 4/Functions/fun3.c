// Argument Pass with Return value

#include<stdio.h>

int add(int a , int b) {
    return a+b;
}

int main() {
    int x,y;
    printf("Enter x: ");
    scanf("%d" , &x);
    printf("Enter y: ");
    scanf("%d" , &y);

    int result = add(x,y);
    printf("Sum: %d\n" , result);
    // printf("Sum: %d\n" , add(x,y));

    return 0;
}