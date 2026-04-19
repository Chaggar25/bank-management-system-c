#include <stdio.h>
#include <string.h>


struct account {
    char user[100];
    int id;
    float balance;
};

int main() {

    struct account arr[2];
    int accountCount = 0;
    int nextId = 1; 

    int choice =0;
    float depositAmt;
    int searchId;
    int i;
    int foundIndex;

    while(choice != 4){
        printf("**** Welcome to the D Bank ****\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Create new Account\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        if (choice == 1){
            if (accountCount == 0) {
                printf("No account exists yet. \n\n");
            } else {
                printf("Enter account ID: ");
                scanf("%d", &searchId);

                foundIndex = -1;

                for (i = 0; i < accountCount; i++)
                {
                    if (arr[i].id == searchId)
                    {
                        foundIndex = i;
                        break;
                    }
                }
                
                if (foundIndex == -1)
                {
                    printf("Account not found. \n\n");
                } else {
                    printf("User: %s\n", arr[foundIndex].user);
                    printf("Balance: %.2f\n\n", arr[foundIndex].balance);
                }
            }
        } else if (choice == 2){
            if (accountCount == 0)
            {
                printf("No accounts exist yet. \n\n");
            } else {
                printf("Enter account ID: ");
                printf("%d", &searchId);

                foundIndex = -1;

                for (i = 0; i < accountCount; i++)
                {
                    if (arr[i].id == searchId)
                    {
                        foundIndex = i;
                        break;
                    }
                }

                if (foundIndex == -1)
                {
                    printf("Account not found. \n\n");
                } else {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &depositAmt);
                }

                if (depositAmt > 0)
                {
                    arr[foundIndex].balance += depositAmt;
                    printf("Deposit successful. \n");
                    printf("Updated balance: %.2f\n\n", arr[foundIndex].balance);
                } else {
                    printf("Invalid deposit amount. \n\n");
                }
            }
        } else if (choice == 3){
            if (accountCount >= 2) {
                printf("Bank account storage is full. \n\n");
            } else {
                printf("Enter username: ");
                scanf("%99s", arr[accountCount].user);

                arr[accountCount].id = nextId;
                arr[accountCount].balance = 1000.0;


                printf("Account created successfully. \n");
                printf("User: %s\n", arr[accountCount].user);
                printf("ID: %d\n", arr[accountCount].id);
                printf("Starting balance: %.2f\n\n", arr[accountCount].balance);

                accountCount++;
                nextId++;
            }
        } else if (choice == 4) {
            printf("Successful logout\n");
        }
        else {
            printf("Invalid choice. Try again \n\n");
        }
    }

    return 0;
}