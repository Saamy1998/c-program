/*Algorithm
Step 1: START.
Step 2: Initialize two integer as num and rev.
Step 3: Declare the number from user.
Step 4: Assign function reverse to rev.
Step 5: Print the reverse number.
Step 6: STOP.

Algorithm for reverse(int num)
Step 1: START.
Step 2: Declare total number of digits in number to digit((int) log10(num)).
Step 3: Check IF num is equels to zero then return zero
Step 4: Else return (num%10 * pow(10, digit)) + reverse(num/10)
Step 5: Recursively call to get reverse of a number
Step 4: STOP.*/

#include <stdio.h>
#include <math.h>

int reverse(int num);                                 // Fuction declaration

int main()
{
    int num, rev;
    printf("Enter any number: ");                     // Input number from user
    scanf("%d", &num);
    rev = reverse(num);                               // Call the function to reverse number 
    printf("Reverse of %d = %d", num, rev);
    return 0;
}

int reverse(int num)                                   // Recursive function to find reverse of any number
{
    int digit = (int) log10(num);                      // Find total digits in num
    if(num == 0)                                       // Base condition
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));      // Recursively call to reverse function
}

/*OUTPUT

~/Function/ $ gcc -o reverse reverse.c -lm
~/Function/ $ ./reverse
Enter any number: 12345
Reverse of 12345 = 54321*/
