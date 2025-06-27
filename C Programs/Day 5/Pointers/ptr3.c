// String pointers 

#include<stdio.h>

int main() {

    char str[] = "Sasidhar";
    char *p = str;
    while (*p != '\0') {
        printf("%c" , *p++);
    }
    

    return 0;
}