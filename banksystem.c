#include <stdio.h>
void pause()
{
    printf("\nPress Enter to continue...");
    getchar();
}
int main()
{
    int choice;
    float deposit, withdraw;
    float balance = 0;

    while (1)
    {
        printf("\n1.Deposit");
        printf("\n2.Withdraw");
        printf("\n3.CheckBalance");
        printf("\n4.Exit");
        printf("\nEnter choice(1-4) : ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            while (getchar() != '\n')
                ;
            pause();
            continue;
        }

        ;
        while (getchar() != '\n')
            ;
        if (choice == 1)
        {
            printf("Enter deposit amount : ");
            if (scanf("%f", &deposit) != 1)
            {
                printf("Invalid input!\n");
                while (getchar() != '\n')
                    ;
                pause();
                continue;
            }

            while (getchar() != '\n')
                ;
            if (deposit > 0)
            {
                balance = deposit + balance;
                printf("New balance : %f", balance);
                pause();
            }
            else
            {
                printf("Invalid deposit input entered!");
                pause();
            }
        }
        else if (choice == 2)
        {
            printf("Enter withdraw amount : ");
            if (scanf("%f", &withdraw) != 1)
            {
                printf("Invalid input!\n");
                while (getchar() != '\n')
                    ;
                pause();
                continue;
            }

            while (getchar() != '\n')
                ;
            if (withdraw > 0)
            {

                if (withdraw <= balance)
                {
                    balance = balance - withdraw;
                    printf("New balance : %f\n", balance);
                    pause();
                }
                else
                {
                    printf("Insufficient amount!\n");
                    pause();
                }
            }
            else
            {
                printf("invalid input entered");
                pause();
            }
        }
        else if (choice == 3)
        {
            printf("Current Balance : %f\n", balance);
            pause();
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            printf("Invalid choice!\n");
            pause();
        }
    }
}