/*Algorithm
Step 1: STRAT.
Step 2: Initialize a integer.
Step 3: Declare the integer value by user.
Step 4: Check IF integer value and '1' is evalutes to 1
Step 5: If it pass print LSB is set(1) else print LSB is unset(0).
Step 6: STOP.*/


#include <stdio.h>

int main()
{
    int j;
    printf("Enter any number: ");                                                                     //Input number from user 
    scanf("%d", &j);
   (j & 1) ?  printf("LSB of %d is set (1).", j) :  printf("LSB of %d is unset (0).", j);             //If (j & 1) evaluates to 1

    return 0;
}

/*OUTPUT
~/New task/ $ gcc -o LSB LSB.c
~/New task/ $ ./LSB
Enter any number: 10
LSB of 10 is unset (0).
~/New task/ $ ./LSB
Enter any number: 11
LSB of 11 is set (1).*?
