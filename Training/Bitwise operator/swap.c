/*Algorithm
Step 1: START.
Step 2: Initialize two integer.
Step 3: Declare the number from user.
Step 4: Do bitwise exclusive OR operator for swapping two numbers
Step 5: num1 ^= num2
Step 6: num2 ^= num1
Step 7: num1 ^= num2
Step 8: Print the swaped numbers
Step 9: STOP.*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter any two numbers: ");          // Input two numbers from user 
    scanf("%d%d", &num1, &num2);

    printf("Original value of num1 = %d\n", num1);
    printf("Original value of num2 = %d\n", num2);

    num1 ^= num2;                            // Swap two numbers
    num2 ^= num1;
    num1 ^= num2;

    printf("Num1 after swapping = %d\n", num1);
    printf("Num2 after swapping = %d\n", num2);

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o swap swap.c
~/New task/ $ ./swap
Enter any two numbers: 65
34
Original value of num1 = 65
Original value of num2 = 34
Num1 after swapping = 34
Num2 after swapping = 65*/
