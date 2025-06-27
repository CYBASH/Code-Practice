// Lexciographical (Combination of Characters)

#include<stdio.h>

int main() {

    char ch;
    int i,j,k;

    for(ch='A';ch<='E';ch++) {
        printf("%c  \n" ,ch);
    }
    for(i='A';i<='E';i++) {
        for(j='A';j<='E';j++) {
            printf("%c%c\n" , i , j);
        }
    }
    for(i='A';i<='E';i++) {
        for(j='A';j<='E';j++) {
            for(k='A';k<='E';k++) {
                printf("%c%c%c\n" , i , j , k);
            }
        }
    }
    return 0;
}