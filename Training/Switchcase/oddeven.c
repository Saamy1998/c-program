/*Algorithm
Step 1: START.
Step 2: Initialize an integer.
Step 3: Declare the integer from user.
Step 4: Switch(num1 % 2)
       a) case 0
            Print as number is even
            Break the case
       b) case 1
            Print as number is odd
            Break the case
Step 5: STOP.*/


#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number to check even or odd: ");                    // Input a number from user 
    scanf("%d", &num);
    switch(num % 2)
    {
        case 0:
            printf("Number is Even");                                    // If n%2 == 0
            break;
        case 1:
            printf("Number is Odd");                                     // Else if n%2 == 1
            break;
    }

    return 0;
}

/*OUTPUT

~/Switchcase/ $ gcc -o oddeven oddeven.c
~/Switchcase/ $ ./oddeven
Enter any number to check even or odd: 726
Number is Even~/Switchcase/ $ ./oddeven
Enter any number to check even or odd: 67729
Number is Odd~/Switchcase/ $ ./oddeven
Enter any number to check even or odd: 5
Number is Odd*/
