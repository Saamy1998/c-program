/*Algorithm
Step 1: START.
Step 2: Initialize an  integer as num.
Step 3: Declare the number from user.
Step 4: Check IF the function isPalindrome(int num) is equals to 1 or not.
Step 5: If it is 1 then print the given number is palindrome else print the number is not palindrome. 
Step 6: STOP.

Algorithm isPalindrome(int num)
Step 1: START.
Step 2: Check IF the number is equals to the value returned by function reverse(int).
Step 3: If it is equal then return 1 else return 0.
Step 4: STOP.

Algorithm for reverse(int num)
Step 1: START.
Step 2: Declare total number of digits in number to digit((int) log10(num)).
Step 3: Check IF num is equels to zero then return zero
Step 4: Else return (num%10 * pow(10, digit)) + reverse(num/10)
Step 5: Recursively call to get reverse of a number
Step 6: STOP.*/

#include <stdio.h>
#include <math.h>

int reverse(int num);                         // Fuction declaration
int isPalindrome(int num);

int main()
{
    int num;
    printf("Enter any number: ");                  // Input any number from user 
    scanf("%d", &num);
    if(isPalindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }
    return 0;
}

int isPalindrome(int num)                          // Function to check whether a number is palindrome or not.
{
    if(num == reverse(num))
    {
        return 1;                                  // This function returns 1 if the number is palindrome
    } 

    return 0;                                      // This function returns 0 if the number is not palindrome
}

int reverse(int num)                                // Recursive function to find reverse of any number
{
    int digit = (int)log10(num);                    // Find number of digits in num
    if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

/*OUTPUT

~/Function/ $ gcc -o pal palindrome.c -lm
~/Function/ $ ./pal
Enter any number: 267762
267762 is palindrome number.
~/Function/ $ ./pal
Enter any number: 34567
34567 is NOT palindrome number.*/
