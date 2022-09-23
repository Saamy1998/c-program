/*Algorithm
Step 1: START.
Step 2: Initialize two integer.
Step 3: Declare the number from user.
Step 5: Flip the given number by using bitwise complement operator
Step 6: Print the flip number of the given number.
Step 7: STOP.*/

#include <stdio.h>

int main()
{
    int num, flippedNumber;
    printf("Enter any number: ");             // Input number from user 
    scanf("%d", &num);
    flippedNumber = ~num;                     // Flip the number by complement operator
    printf("Original number = %d (in decimal)\n", num);
    printf("Number after bits are flipped = %d (in decimal)", flippedNumber);

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o flip flip.c
~/New task/ $ ./flip
Enter any number: 1
Original number = 1 (in decimal)
Number after bits are flipped = -2 (in decimal)~/New task/ $ ./flip
Enter any number: 26
Original number = 26 (in decimal)
Number after bits are flipped = -27 (in decimal)~/New task/ $ ./flip
Enter any number: 42865
Original number = 42865 (in decimal)
Number after bits are flipped = -42866 (in decimal*/
