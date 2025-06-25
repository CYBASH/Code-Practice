// Hospital Billing System

#include<stdio.h>

int main() {

    int choice,patient_count=0,patient_age,disease_code;
    float total_bill , bill;

    do {
        printf("\n ----Hospital Menu----\n");
        printf("1. Add Patient\n");
        printf("2. View Total Bill\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d" , &choice);

        if(choice == 1) {
            patient_count++;
            printf("Enter the patient age: ");
            scanf("%d" , &patient_age);
            printf("Enter the disease type: \n");
            printf("1. Fever \n");
            printf("2. Infection \n");
            printf("3. Surgery \n");
            printf("Enter the disease code: ");
            scanf("%d" , &disease_code);
            printf("Enter estimated bill: ");
            scanf("%f" , &bill);
            if(disease_code == 1) {
                printf("Disease Fever \n");
            } else if (disease_code == 2) {
                printf("Disease Infection \n");
            } else if (disease_code == 3) {
                printf("Disease Surgery \n");
            } else {
                printf("Invalid Code , Enter between (1-3) \n");
            }

            total_bill += bill;
            printf("Patient added successfully!");
        } else if(choice == 2) {
            printf("\n Total Patients : %d \n" , patient_count);
            printf("Total Hospital Bill : %.2f \n" , total_bill);
        } else if(choice == 3) {
            printf("Exiting System, Thank You \n");
        } else {
            printf("Invalid Choice, Try Again!! \n");
        }
    } while(choice != 3);

    return 0;
}