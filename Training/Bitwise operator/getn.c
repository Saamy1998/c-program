/*Algorithm
Step 1: START.
Step 2: Initialize three integer.
Step 3: Declare the number from user.
Step 4: Declare the nth bit to check from user.
Step 5: Right shift num for n times and perform bitwise AND with 1 and assign to getn.
Step 6: Print the nth bit of the given number
Step 7: STOP.*/

#include <stdio.h>

int main()
{
    int num,n,getn;
    printf("Enter any number: ");       // Input number from user
    scanf("%d", &num);
    printf("Enter nth bit to check(0-31)= ");     // Input bit position you want to check
    scanf("%d", &n);
    getn = (num >> n) & 1;         // Right shift num, n times and perform bitwise AND with 1
    printf("The %d bit is set to %d", n,getn);

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o getn getn.c
~/New task/ $ ./getn
Enter any number: 15
Enter nth bit to check(0-31)= 0
The 0 bit is set to 1~/New task/ $ ./getn
Enter any number: 14
Enter nth bit to check(0-31)= 0
The 0 bit is set to 0~/New task/ $ ./getn
Enter any number: 14
Enter nth bit to check(0-31)= 2
The 2 bit is set to 1*/
