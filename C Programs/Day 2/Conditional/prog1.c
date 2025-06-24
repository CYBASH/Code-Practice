#include<stdio.h>
int main() {
    int n=10 , m , k=5 , sale;
    scanf("%d" , &sale);
    m = n - sale;
    if (sale >= 1 &&  sale <= k) {
        printf("NUMBER OF CANDIES SOLD: %d\n" , sale);
        printf("NUMBER OF CANDIES LEFT: %d\n" , m);
    } else {
        printf("INVALID INPUT\n");
        printf("NUMBER OF CANDIES LEFT: %d\n" , m);
    }
    return 0;
}