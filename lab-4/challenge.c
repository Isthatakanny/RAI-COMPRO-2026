#include <stdio.h>

int main() {
    int option = 0, balance = 0, num, status = 1;
    
    do {
        printf("\n====== ATM MENU ======");
        printf("\n1. Check Balance");
        printf("\n2. Deposit money");
        printf("\n3. Withdraw money");
        printf("\n4. Exit");
        printf("\nChoose an option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Current Balance: %.2f", (float)balance);
            break;
        
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%d", &num);
            balance += num;
            num = 0;
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%d", &num);
            if (balance < num) {
                printf("\nWithdrawal failed, not enough balance to withdraw requested amount.");
            }
            else {
                balance -= num;
                printf("\nWithdrawal successful");
            }
            num = 0;
            break;

        case 4:
            status = 0;
            printf("Thank you for using the ATM.\n");
            break;
        }
    } while (status != 0);
}