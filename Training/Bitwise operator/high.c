/*Algorithm
Step 1: START.
Step 2: Initialize three integer.
Step 3: Declare the size of integer to a integer.
Step 4: Declare the number from user.
Step 5: Check FOR condition for iterate over each bit of the integer
Step 6: Check IF condition, is set then count high else goto step 5.
Step 7: Chech IF high is not equal to -1, is true goto step 8 else goto step 9.
Step 8: Print the highest order of the given number
Step 9: Print 0 has no set bits.
Step 10: STOP.*/

#include <stdio.h>

int main()
{
    int num,high=-1,i;
    int j=sizeof(int) * 8;               // Integer size in bits
    printf("Enter any number= ");        // Input number from user
    scanf("%d", &num);
    for(i=0; i<j; i++)            // Iterate over each bit of integer
    {
        if((num>>i) & 1)                 // If current bit is set
            high = i;
    }
    if (high != -1)                      // Check given num is 0 or not
        printf("Highest order set bit in %d is %d", num, high);
    else
        printf("0 has no set bits.");

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o high high.c
~/New task/ $ ./high
Enter any number= 34
Highest order set bit in 34 is 5~/New task/ $ ./high
Enter any number= 27
Highest order set bit in 27 is 4~/New task/ $ ./high
Enter any number= 163
Highest order set bit in 163 is 7*/
