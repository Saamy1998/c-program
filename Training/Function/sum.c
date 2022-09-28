/*Algorithm
Step 1: START.
Step 2: Initialize two integer as num and sum.
Step 3: Declare the number from user.
Step 4: Assign function sumOfDigits(int num) value to sum.
Step 5: Print the sum of digits.
Step 6: STOP.

Algorithm sumOfDigits(int num)
Step 1: START.
Step 2: IF num is equals to zero, then return zero.
Step 3: Return (num % 10) + sumOfDigits(num / 10) for adding the digits of the number.
Step 4: STOP.*/

#include <stdio.h>

int sumOfDigits(int num);                                            // Fuction declaration


int main()
{
    int num, sum;
    printf("Enter any number to find sum of digits: ");             // Input any number from user
    scanf("%d", &num);
    sum = sumOfDigits(num);
    printf("Sum of digits of %d = %d", num, sum);
    return 0;
}

int sumOfDigits(int num)                                            // Recursive function to find sum of digits of a number
{
    if(num == 0)                                                    // Base condition
        return 0;
    return ((num % 10) + sumOfDigits(num / 10));
}

/*OUTPUT

~/Function/ $ gcc -o sum sum.c
~/Function/ $ ./sum
Enter any number to find sum of digits: 12345
Sum of digits of 12345 = 15~/Function/ $ ./sum
Enter any number to find sum of digits: 4567
Sum of digits of 4567 = 22*/
