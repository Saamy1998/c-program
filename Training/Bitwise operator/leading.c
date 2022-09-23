/*Algorithm
Step 1: START.
Step 2: Initialize four integer.
Step 3: Declare the size of integer to a integer.
Step 4: Declare the number from user.
Step 5: Assigne integer size in bit in binary form to msd.
Step 6: Check FOR condition for iterate over each bit of the integer
Step 7: Check IF condition, is set then bit is found the terminate from loop else goto step 8.
Step 8: Increment count by 1 and goto step 6
Step 8: Print the number of trailing zeros of the given number.
Step 9: STOP.*/

#include <stdio.h>

int main()
{
    int num, count, msb, i;
    int j=sizeof(int) * 8;                        // Integer size in bit
    printf("Enter any number: ");                 // Input number from user 
    scanf("%d", &num);
    msb = 1 << (j - 1);                           // Equivalent to 10000000 00000000 00000000 00000000
    count = 0;
    for(i=0; i<j; i++)                            // Iterate over each bit 
    {
        if((num << i) & msb)                      // If leading set bit is found 
        {
            break;                                // Terminate the loop 
        }

        count++;
    }

    printf("Total number of leading zeros in %d is %d", num, count);

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o leading leading.c
~/New task/ $ ./leading
Enter any number: 1
Total number of leading zeros in 1 is 31~/New task/ $ ./leading
Enter any number: 3687
Total number of leading zeros in 3687 is 20~/New task/ $ ./leading
Enter any number: 42639897
Total number of leading zeros in 42639897 is 6*/
