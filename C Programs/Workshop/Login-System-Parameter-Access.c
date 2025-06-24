/* Login system with parameter Access */
#include<stdio.h>
#include<string.h>

int main() {
    char username[10] , password[10];

    printf("Enter username: ");
    scanf("%s" , username);
    printf("Enter password: ");
    scanf("%s" , password);

    if(strcmp(username ,"admin") == 0) {
        if(strcmp(password , "1234") == 0) {
            printf("Access granted, welcome admin\n");
        } else {
            printf("Wrong password\n");
        }
    } else {
        printf("Username not found\n");
    }

    return 0;


}