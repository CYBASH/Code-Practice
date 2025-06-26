// Positional Reverse of a string

#include<stdio.h>

int main() {

    char str[100];
    int i = 0, j = -1, x = 0, temp;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[x] != '\0') {
        if (str[x] == ' ') {
            temp = x - 1;
            while (temp > j) {
                printf("%c", str[temp]);
                temp--;
            }
            printf(" ");
            j = x;
        }
        x++;
    }

    // Print the last word (after the last space)
    temp = x - 1;
    while (temp > j) {
        printf("%c", str[temp]);
        temp--;
    }

    printf("\n");
    return 0;
}