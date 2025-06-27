// Pointer to a variable

#include<stdio.h>

int main() {
    int a=10;
    int *p;
    p = &a;

    printf("Value: %d\n" , a);
    printf("Address: %d\n" , &a);

    printf("Address of p: %p\n" , p);
    printf("Value of p: %d\n" , *p);

    return 0;
}