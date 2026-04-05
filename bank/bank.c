#include <stdio.h>


int main() {
    int balance = 1000;
    int choice;
    int depositAmt;
    int i;

    // printf("**** Welcome to the D Bank ****\n");
    // printf("1. Check Balance\n");
    // printf("2. Deposit\n");
    // printf("3. Create new Account\n");
    // printf("4. Exit\n");

    // printf("Enter your choice: ");
    // scanf("%d", &choice);

    while(choice != 4){
        printf("**** Welcome to the D Bank ****\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Create new Account\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        if (choice == 1){
            printf("Your balance is: %d\n", balance);
        } else if (choice == 2){
            printf("Enter amount to deposit\n: ");
            scanf("%d", &depositAmt);
            if(depositAmt > 0){
                depositAmt += balance;
                printf("amount update: %d\n", depositAmt);
                balance = depositAmt;
            }
        }
    }

    return 0;



    
}