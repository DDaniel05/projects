#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Function prototypes
void displayMenu();
void depositMoney();
void withdrawMoney();
void checkBalance();
void transferMoney();

// Global variables
float balance = 5000;

int main() {
   int choice;

   while(1) {
      displayMenu();
      printf("\nEnter your choice: ");
      scanf("%d", &choice);

      switch(choice) {
         case 1:
            depositMoney();
            break;

         case 2:
            withdrawMoney();
            break;

         case 3:
            checkBalance();
            break;

         case 4:
            transferMoney();
            break;

         case 5:
            printf("\nThank you for using our ATM. Goodbye!");
            exit(0);
            break;

         default:
            printf("\nInvalid choice. Please try again.");
      }
   }

   return 0;
}

void displayMenu() {
   printf("\nWelcome to the ATM!");
   printf("\n1. Deposit Money");
   printf("\n2. Withdraw Money");
   printf("\n3. Check Balance");
   printf("\n4. Transfer Money");
   printf("\n5. Exit");
}

void depositMoney() {
   float amount;
   printf("\nEnter the amount to be deposited: ");
   scanf("%f", &amount);
   balance += amount;
   printf("\nDeposit successful. New balance: $%.2f", balance);
}

void withdrawMoney() {
   float amount;
   printf("\nEnter the amount to be withdrawn: ");
   scanf("%f", &amount);

   if(amount > balance) {
      printf("\nInsufficient balance. Withdrawal not possible.");
   } else {
      balance -= amount;
      printf("\nWithdrawal successful. New balance: $%.2f", balance);
   }
}

void checkBalance() {
   printf("\nYour current balance is: $%.2f", balance);
}

void transferMoney() {
   float amount;
   printf("\nEnter the amount to be transferred: ");
   scanf("%f", &amount);

   if(amount > balance) {
      printf("\nInsufficient balance. Transfer not possible.");
   } else {
      balance -= amount;
      printf("\nTransfer successful. New balance: $%.2f", balance);
   }
}