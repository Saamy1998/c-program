/*Algorithm
Step 1: START.
Step 2: Initialize four integer values as num1, num2, maximum and minimum.
Step 3: Declare the two number from user.
Step 4: Call max function and assign it to maximum.
Step 5: Call min function and assign it to minimum.
Step 6: Print the maximum and minimum value.
Step 7: STOP.

Algorithm for max(int num1, int num2)
Step 1: START.
Step 2: Return the maximum value of two number.
Step 3: STOP.

Algorithm for min(int num1, intnum2)
Step 1: START.
Step 2: Return the minium value of two number.
Step 3: STOP.*/

#include <stdio.h>

int max(int num1, int num2);                   // Function declarations
int min(int num1, int num2);

int main()
{
    int num1, num2, maximum, minimum;
    printf("Enter any two numbers: ");         // Input two numbers from user
    scanf("%d%d", &num1, &num2);
    maximum = max(num1, num2);                 // Call maximum function
    minimum = min(num1, num2);                 // Call minimum function
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d", minimum);

    return 0;
}

int max(int num1, int num2)                    // Find maximum between two numbers.
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2)                    // Find minimum between two numbers.
{
    return (num1 > num2 ) ? num2 : num1;
}

/*OUTPUT

~/Function/ $ gcc -o minmax minmax.c
~/Function/ $ ./minmax
Enter any two numbers: 45
96
Maximum = 96
Minimum = 45~/Function/ $ ./minmax
Enter any two numbers: 162
842
Maximum = 842
Minimum = 162*/
