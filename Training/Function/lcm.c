/*Algorithm
Step 1: START.
Step 2: Initialize three integer as num1, num2 and LCM.
Step 3: Declare two number to find GCD from user.
Step 4: Check IF num1 is greater then num2, if true call function as lcm(num2,num1) else call function as lcm(num1,num2)
Step 5: Assign function lcm(int a, int b) value to LCM.
Step 6: Print the LCM of the two number.
Step 7: STOP.

Algorithm lcm(int a, int b)
Step 1: START.
Step 2: Initialize static integer multiple and assign as zero.
Step 3: Check IF condition (multiple % a == 0) && (multiple % b == 0).
Step 4: If it is true then return multiple else return function lcm(a, b) to get LCM of two number.
Step 5: STOP.*/

#include <stdio.h>

int lcm(int a, int b);                                      // Function declaration

int main()
{
    int num1, num2, LCM;
    printf("Enter any two numbers to find lcm: ");          // Input two numbers from user
    scanf("%d%d", &num1, &num2);
    if(num1 > num2)                                         // Ensures that first parameter of LCM function is always less than second
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
    printf("LCM of %d and %d = %d", num1, num2, LCM);
    return 0;
}

int lcm(int a, int b)                                       // Recursive function to find lcm of two numbers 'a' and 'b'.
{
    static int multiple = 0;
    multiple += b;                                          // Increments multiple by adding max value to it
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else
    {
        return lcm(a, b);
    }
}

/*OUTPUT

~/Function/ $ gcc -o lcm lcm.c
~/Function/ $ ./lcm
Enter any two numbers to find lcm: 12
18
LCM of 12 and 18 = 36~/Function/ $ ./lcm
Enter any two numbers to find lcm: 35
5
LCM of 35 and 5 = 35*/
