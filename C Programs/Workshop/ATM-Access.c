/* ATM Access */

#include<stdio.h>

int main() {

    int balance = 5000 , pin=1234 , input_pin , withdrawl_amount;
    printf("Enter PIN: ");
    scanf("%d" , &input_pin);

    if (input_pin == pin) {
        printf("Welcome SASIDHAR AKURATHI\nEnter Withdrawl amount: ");
        scanf("%d" , &withdrawl_amount);
        if (withdrawl_amount > 0 && withdrawl_amount <= 5000) {
            balance -= withdrawl_amount;
            printf("Withdrawl Successfull\nRemaining Balance: %d\n" , balance);
        } else {
            if (withdrawl_amount <= 0) {
                printf("Amount should be greater than 0\n");
            } else if(withdrawl_amount > 5000) {
                printf("Insufficient Balance\n");
                printf("Balance: %d\n" , balance);
            }
        }
    } else {
        printf("Enter valid PIN\n");
    }


    return 0;
}