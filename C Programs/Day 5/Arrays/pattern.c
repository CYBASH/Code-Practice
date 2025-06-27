// Lexciographical pyramid pattern

#include<stdio.h>

int main() {

    int n , i ,j,k;
    char ch='A';

    printf("Enter number of rows: ");
    scanf("%d" , &n);

    for(i=1;i<=n;i++) {
        for (j=1; j <= n-i; j++) {
            printf(" ");
        }
        for(int k=0;k<i;k++) {
            printf("%c " , ch++);
            if(ch == '[')
                ch = 'a';
            else if(ch == '{')
                ch = 'A';
        }
        printf("\n");
        
    }

    return 0;
}