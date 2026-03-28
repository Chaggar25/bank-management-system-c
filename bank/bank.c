#include <stdio.h>


int main() {
    int balance = 1000;
    int choice;

    printf("**** Welcome to the D Bank ****\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Your balance is: %d\n", balance);
    }

    return 0;
    
}