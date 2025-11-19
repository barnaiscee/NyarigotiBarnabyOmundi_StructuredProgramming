#include <stdio.h>

int main() {
    int number1, number2;

    //Input numbers
    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    // Perform the calculations
    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;
    float division = (float)number1 / number2; // cast division for floating point quotients
    int modulus = number1 % number2;

    // Step 3: Display results
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);
    printf("Division: %.3f\n", division);
    printf("Modulus: %d\n", modulus);

    return 0;
}
