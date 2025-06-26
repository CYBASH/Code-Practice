// Reverse of a word

#include<stdio.h>

int main() {

    char str[50] , result[50];
    printf("Enter a word: ");
    scanf("%s" , str);

    int i=0;
    while(str[i] != '\0') {
        i++;
    }
    int j=0;
    i--;
    while(i>=0) {
        result[j++] = str[i--];
    }
    result[j] = '\0';

    printf("Reversed Word: %s\n" , result);


    return 0;
}