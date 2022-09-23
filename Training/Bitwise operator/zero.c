/*Algorithm
Step 1: START.
Step 2: Initialize four integer.
Step 3: Declare the number from user.
Step 5: Assign 0 to both zeros and ones.
Step 6: Check FOR condition for iterate over each bit of the integer.
Step 7: Check IF condition, is set then increment ones else increment zeros and goto step 8.
Step 8: Right shift bits of num to one position and goto step6.
Step 9: STOP.*/

#include <stdio.h>

int main()
{
    int num, zeros, ones, i;
    int j=sizeof(int) * 8;                        // Integer size in bit
    printf("Enter any number: ");                 // Input number from user 
    scanf("%d", &num);

    zeros = 0;
    ones = 0;

    for(i=0; i<j; i++)
    {
        if(num & 1)                              // If LSB is set then increment ones otherwise zeros
            ones++;
        else
            zeros++;
        num >>= 1;                               // Right shift bits of num to one position
    } 

    printf("Total zero bit is %d\n", zeros);
    printf("Total one bit is %d", ones);

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o zero zero.c
~/New task/ $ ./zero
Enter any number: 120
Total zero bit is 28
Total one bit is 4~/New task/ $ ./zero
Enter any number: 1012
Total zero bit is 25
Total one bit is 7*/
