/*  Write a c program to check weather a character is a vowel or consonant or 
    an invalid charcater. (using if)   */

#include<stdio.h>
int main() {

    char ch;
    printf("Enter a character: ");
    scanf("%c" , &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U') {
            printf("Character is a Vowel");
        } else {
            printf("Character is a consonant");
        }
    } else {
        printf("Invalid Character");
    }

    return 0;
}