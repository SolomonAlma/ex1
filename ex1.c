/******************
Name: Shlomo Almagor
ID: 039256276
Assignment: Exercise 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
int main() {

    int number, position;

    // What bit
    printf("What bit:\n");
    /*Scan two integers (representing number and a position)
    Print the bit in this position. */

    printf("Enter an integer: \n");
    scanf("%d", &number);
    printf("Enter the desired bit position: \n");
    scanf("%d", &position);

    // Check if the bit position is valid
    if (position < 0) {
        printf("Invalid position. Please enter a valid position \n");
        return 1;
    }

    // Use right shift and bitwise operator AND to get the bit at the specified position
    int bit = (number >> position) & 1;

    // Print the result
    printf("The bit at position %d is: %d\n", position, bit);

    // Set bit
    printf("\nSet bit:\n");
    /*Scan two integers (representing number and a position)
    Make sure the bit in this position is "on" (equal to 1)
    Print the output

    Now make sure it's "off" (equal to 0)
    Print the output */

    // Get input from the user
    printf("Enter an integer: \n");
    scanf("%d", &number);
    printf("Enter the bit position: \n");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0) {
        printf("Invalid position. Please enter a valid position \n");
        return 1;
    }

    /* Create the number with the bit set to 1 (on) using the 'or' operator.
       We create a mask and left shift it by the given position and then operate */
    int numberWithBitOn = number | (1 << position);

    /* Create the number with the bit set to 0 (off) using the 'and not' operator.
       We create a mask and left shift it by the given position and then operate */
    int numberWithBitOff = number & ~(1 << position);

    // Print the results
    printf("Number with bit %d turned on: %d\n", position, numberWithBitOn);
    printf("Number with bit %d turned off: %d\n", position, numberWithBitOff);

    // Toggle bit
    printf("\nToggle bit:\n");
    /*Scan two integers (representing number and a position)
      Toggle the bit in this position
      Print the new number */

    // Get the number and position from the user
    printf("Enter a number: \n");
    scanf("%d", &number);

    printf("Enter the bit position to toggle: \n");
    scanf("%d", &position);

    // Toggle the bit at the specified position
    int toggledNumber = number ^ (1 << position);

    // Print the result
    printf("The number after toggling bit %d is: %d\n", position, toggledNumber);
  
    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan an integer
    If the number is even - print 1, else - print 0. */

    // Get the number from the user
    printf("Enter a number: \n");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("1\n"); // 1 for even
    } else {
       printf("0\n"); // 0 for odd
    }

    // 3, 5, 7, 11
    printf("\n3, 5, 7, 11:\n");
    /* Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions: 3,5,7,11 in the result. */

    int num1, num2, sum;

    // Get two numbers in octal base from the user
    printf("Enter the first number in octal base: \n");
    scanf("%o", &num1);
    printf("Enter the second number in octal base: \n");
    scanf("%o", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Print the sum in hexadecimal base
    printf("The sum in hexadecimal is: %X\n", sum);

    // Print the bits at positions 3, 5, 7, and 11
    printf("Bit at position 3: %d\n", (sum >> 3) & 1);
    printf("Bit at position 5: %d\n", (sum >> 5) & 1);
    printf("Bit at position 7: %d\n", (sum >> 7) & 1);
    printf("Bit at position 11: %d\n", (sum >> 11) & 1);

    printf("Bye!\n");
  
    return 0;
}

#pragma clang diagnostic pop