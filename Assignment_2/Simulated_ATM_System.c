#include <stdio.h>

const int correctPIN = 1234;
const int MAX_ATTEMPTS = 3;

// Function Prototypes

int login(); // login returns an int 1 for Success and 0 for Failure
void checkBalance(float currentBalance);
void deposit(float *currentBalance); // used a pointer to modify the actual balance varable
void withdraw(float *currentBalance); 

int main() 
{
    float balance = 1000.00; 
    int option;
    int LoggedIn = 0;

    //Login / PIN Verification
    LoggedIn = login();

    // If login returned 0 (False), stop the program
    if (LoggedIn == 0) 
    {
        printf("\nMaximum attempts exceeded. Access Denied.\n");
        return 0; 
    }

    // Menu & Loop
    while (1) 
    {
        printf("\n--- ATM Menu ---\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option from 1 to 4: ");
        scanf("%d", &option);

        // Options
        switch (option) 
        {
            case 1:
                checkBalance(balance); // Passes the value (Copy)
                break;
            case 2:
                deposit(&balance); // Passes the address (Original)
                break;
            case 3:
                withdraw(&balance); 
                break;
            case 4:
                printf("Thank you for using our Simulated ATM System. Goodbye!\n");
                return 0; // Exit program
            default:
                printf("Invalid choice. Please select 1-4.\n");
        }
    }
    return 0;
}

// ======================
// FUNCTION DEFINATIONS
//=======================

// Login
int login() 
{
    int enteredPin;
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) 
    {
        printf("\nPlease enter your PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPIN) 
        {
            printf("Login Successful!\n");
            return 1; // Return 1 for True
        } 
        else 
        {
            attempts++;
            printf("Incorrect PIN. %d attempts remaining\n", MAX_ATTEMPTS - attempts);
        }
    }
    return 0; // Return 0 for False (failed all attempts)
}

// Check Balance
void checkBalance(float currentBalance) 
{
    printf("\nYour Current Balance is: Ksh.%.2f\n", currentBalance);
}

// Deposit (Using Pointers)
void deposit(float *currentBalance) 
{
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    // Validation
    if (amount > 0) 
    {
        *currentBalance += amount; // Updates the balance variable
        printf("Successfully deposited Ksh.%.2f. New Balance: Ksh.%.2f\n", amount, *currentBalance);
    } 
    else 
    {
        printf("Error: Amount deposited must be positive!\n");
    }
}

// Withdraw function
void withdraw(float *currentBalance) 
{
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    // Validation
    if (amount <= 0) 
    {
        printf("Error: Withdrawal amount must be positive!\n");
    } 
    else if (amount > *currentBalance) 
    {
        printf("Error: Insufficient funds. You only have Ksh.%.2f.\n", *currentBalance);
    } 
    else 
    {
        *currentBalance -= amount; // Updates the balance variable
        printf("Successfully withdrew Ksh.%.2f. New Balance: Ksh.%.2f\n", amount, *currentBalance);
    }
}