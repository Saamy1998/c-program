/*Algorithm
Step 1: START.
Step 2: Initialize two integer.
Step 3: Declare size of the integer in integer a.
Step 4: Declare the number from user.
Step 5: Shift first bit of 1 to higher order and assign to msd.
Step 6: Check IF bitwise AND operation num & msb evaluate to 1 then MSB of num is set otherwise not.
Step 7: STOP.*/

#include <stdio.h>                 

int main()
{
    int num, msb;
    int a=sizeof(int)*8;
    printf("Enter any number: ");                 // Input number from user
    scanf("%d", &num);
    msb = 1 << (a-1);                             // Move first bit of 1 to highest order 
    if(num & msb)                                 // Perform bitwise AND with msb and num 
        printf("MSB of %d is set (1).", num);     // Negative number is 1
    else
        printf("MSB of %d is unset (0).", num);   // Positive number is 0

    return 0;
}


/*OUTPUT
~/New task/ $ gcc -o MSB MSB.c
~/New task/ $ ./MSB
Enter any number: 12
MSB of 12 is unset (0).~/New task/ $ ./MSB
Enter any number: -12
MSB of -12 is set (1).*/
