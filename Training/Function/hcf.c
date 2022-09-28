/*Algorithm
Step 1: START.
Step 2: Initialize three integer as num1, num2 and hcf.
Step 3: Declare two number to find GCD from user.
Step 4: Assign function gcd(int a, int b) value to hcf.
Step 5: Print the GCF of the two number.
Step 6: STOP.

Algorithm gcd(int a, int b)
Step 1: START.
Step 2: IF b is equals to zero, then return a.
Step 3: Else return function gcd(b, a%b) for finding the gcf of the two number.
Step 4: STOP.*/

#include <stdio.h>

int gcd(int a, int b);                                           // Function declaration

int main()
{
    int num1, num2, hcf;
    printf("Enter any two numbers to find GCD: ");               // Input two numbers from user
    scanf("%d%d", &num1, &num2);
    hcf = gcd(num1, num2);
    printf("GCD of %d and %d = %d", num1, num2, hcf);
    return 0;
}

int gcd(int a, int b)                                            // Recursive approach of euclidean algorithm to find GCD of two numbers
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

/*OUTPUT

~/Function/ $ gcc -o hcf hcf.c
~/Function/ $ ./hcf
Enter any two numbers to find GCD: 60
30
GCD of 60 and 30 = 30~/Function/ $ ./hcf
Enter any two numbers to find GCD: 120
90
GCD of 120 and 90 = 30*/
