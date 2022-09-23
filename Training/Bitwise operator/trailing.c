/*Algorithm
Step 1: START.
Step 2: Initialize three integer.
Step 3: Declare the size of integer to a integer.
Step 4: Declare the number from user.
Step 5: Assigne zero to count.
Step 6: Check FOR condition for iterate over each bit of the integer
Step 7: Check IF condition, is set then bit is foundthe terminate from loop else goto step 8.
Step 8: Increment count by 1 and goto step 6
Step 8: Print the number of trailing zeros of the given number.
Step 9: STOP.*/

#include <stdio.h>

int main()
{
    int num, count, i;
    int j=sizeof(int) * 8;                        // Integer size in bits
    printf("Enter any number: ");                 // Input number from user 
    scanf("%d", &num);
    count = 0;
    for(i=0; i<j; i++)                           // Iterate over each bit of the number 
    {
        if((num >> i ) & 1)                      // If set bit is found the terminate from loop
        {
            break;                               // Terminate from loop 
        }
        count++;                                 // Increment trailing zeros count 
    }

    printf("Total number of trailing zeros in %d is %d.", num, count);

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o trailing trailing.c
~/New task/ $ ./trailing
Enter any number: 36
Total number of trailing zeros in 36 is 2.~/New task/ $ ./trailing
Enter any number: 128
Total number of trailing zeros in 128 is 7.*/
