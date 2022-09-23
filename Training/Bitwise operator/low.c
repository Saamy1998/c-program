/*Algorithm
Step 1: START.
Step 2: Initialize three integer.
Step 3: Declare the size of integer to a integer.
Step 4: Declare the number from user.
Step 5: Assigne size of integer mines one to low.
Step 6: Check FOR condition for iterate over each bit of the integer
Step 7: Check IF condition, is set then assign i to low and terminate the FOR statment.
Step 8: Print the lowest order of the given number.
Step 9: STOP.*/

#include <stdio.h>

int main()
{
    int num,low,i;
    int j=sizeof(int) * 8;                        // Integer size in bits
    printf("Enter any number: ");                 // Input number from user
    scanf("%d", &num);
    low = j - 1;                                  //  Initially set the order to max size of integer 
    for(i=0; i<j; i++)                            // Iterate through each bit of integer 
    {
        if((num>>i) & 1)                          // If current bit is set */
        {
            low = i;
            break;                                // Terminate the loop 
        }
    }
      printf("Lowest order set bit in %d is %d", num,low);

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o low low.c
~/New task/ $ ./low
Enter any number: 22
Lowest order set bit in 22 is 1~/New task/ $ ./low
Enter any number: 17
Lowest order set bit in 17 is 0~/New task/ $ ./low
Enter any number: 128
Lowest order set bit in 128 is 7*/
