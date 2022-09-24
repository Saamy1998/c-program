/*Algorithm
Step 1: START.
Step 2: Initialize one integer.
Step 3: Declare the number from user.
Step 4: Do bitwise AND operator for checking odd or even.  
Step 5: Print the odd if the AND operator evalutes 1 else print the given number as even.
Step 6: STOP.*/


#include <stdio.h>

int main()
{
    int j;
    printf("Enter any number: ");                                                    // Input number from user 
    scanf("%d", &j);
    (j & 1) ?  printf(" %d is odd.", j) :  printf(" %d is even.", j);                // If (j & 1) evaluates to 1

    return 0;
}

/*OUTPUT
~/New task/ $ gcc -o oddeven oddeven.c
~/New task/ $ ./oddeven
Enter any number: 12
 12 is even.~/New task/ $ ./oddeven
Enter any number: 19
 19 is odd.*/
