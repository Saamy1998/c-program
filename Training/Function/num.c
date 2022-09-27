/*Algorithm
Step 1: START.
Step 2: Initialize an integer as num.
Step 3: Declare the number from user.
Step 4: If function isPrime returns 1 then print the number is prime else print the number is not prime.
Step 5: If function isArmstrong returns 1 then print the number is Armstrong else print the number is not Armstrong.
Step 6: If function isPerfect returns 1 then print the number is perfect else print the number is not perfect.
Step 7: STOP.

Algorithm for isPrime(int num)
Step 1: START.
Step 2: Check if the number is divisible by any number other than 1 and self then it is not prime.
Step 3: Return 1 if the number is prime else print the number is not prime.
Step 4: STOP.

Algorithm for isArmstrong(int num)
Step 1: START.
Step 2: Initialize four integer as lastDigit, sum, originalNum, digits.
Step 3: Assign zero to sum, num to originalNum and log10(num) plues one to digits(total digits in num).
Step 4: Check WHILE condition, if it is true goto step 5 else goto step 8.
Step 5: lastDigit = num % 10 for extracting the last digit.
Step 6: sum =sum + round(pow(lastDigit, digits)) for compute sum of power of last digit.
Step 7: num = num / 10 forremoving the last digit.
Step 8: Returns 1 if the number is Armstrong number otherwise 0.
Step 9: STOP.

Algorithm for isPerfect(int num)
Step 1: START.
Step 2: Initialize three integer as i, sum, n.
Step 3: Check FOR condition, if it is true goto step 4 else step 5.
Step 4: Check IF i is a divisor of num, if it is true count i and sum, then assign to sum.
Step 5: Returns 1 if the number is perfect otherwise 0.
Step 6: STOP.*/

#include <stdio.h>
#include <math.h>

int isPrime(int num);                                  // Function declarations
int isArmstrong(int num);
int isPerfect(int num);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isPrime(num))                                   // Call isPrime() functions
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    if(isArmstrong(num))                               // Call isArmstrong() function
    { 
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    if(isPerfect(num))                                 // Call isPerfect() function
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }

    return 0;
}

int isPrime(int num)                                  // Check whether a number is prime or not.
{
    int i;

    for(i=2; i<=num/2; i++)
    {
        if(num%i == 0)                               //If the number is divisible by any number other than 1 and self then it is not prime
        {
            return 0;                                // Returns 0 if the number is not prime 
        }
    }

    return 1;                                        // Returns 1 if the number is prime 
}

int isArmstrong(int num)                             //Check whether a number is Armstrong number or not.
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    originalNum = num;
    digits = (int) log10(num) + 1;                    // Find total digits in num
    while(num > 0)                                    // Calculate sum of power of digits
    {
        lastDigit = num % 10;                         // Extract the last digit
        sum = sum + round(pow(lastDigit, digits));    // Compute sum of power of last digit
        num = num / 10;                               // Remove the last digit
    }

    return (originalNum == sum);                      // Returns 1 if the number is Armstrong number otherwise 0.
}

int isPerfect(int num)                                // Check whether the number is perfect number or not.
{
    int i, sum, n;
    sum = 0;
    n = num;

    for(i=1; i<n; i++)
    {
        if(n%i == 0)                                  // If i is a divisor of num 
        {
            sum += i;
        }
    }

    return (num == sum);                              // Returns 1 if the number is perfect otherwise 0.
}

/*OUTPUT

~/Function/ $ gcc -o num num.c -lm
~/Function/ $ ./num
Enter any number: 4
4 is not Prime number.
4 is Armstrong number.
4 is not Perfect number.
~/Function/ $ ./num
Enter any number: 6
6 is not Prime number.
6 is Armstrong number.
6 is Perfect number.
~/Function/ $ ./num
Enter any number: 65
65 is not Prime number.
65 is not Armstrong number.
65 is not Perfect number.*/
