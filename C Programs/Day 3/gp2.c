//  1 1 2 3 4 9 8 27 ...
//  Odd series are powers of 2 , Even series are powers of 3
#include<stdio.h>
#include<math.h>

int main() {

    int n , two=1 , three=1;
    printf("Enter n: ");
    scanf("%d" , &n);
    for(int i=1;i<=n;i++) {
        if(i%2 == 0) {
            printf("%d " ,three);
            three *= 3;
        } else {
            printf("%d " ,two);
            two *= 2;
        }
    }

    // OR

    if(n%2 != 0) {
        printf("\n%d" , (int)pow(2,n/2));
    } else {
        printf("\n%d" , (int)pow(3,n/2-1));
    }

    return 0;
}