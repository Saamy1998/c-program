/*Algorithm
Step 1: START.
Step 2: Initialize three integer.
Step 3: Declare the number from user.
Step 4: Declare the nth bit to clear from user.
Step 5: Left shifts 1 to n times and perform complement of above then finally perform bitwise AND with num and result, and assign to newNum.
Step 6: Print the nth bit clear after the process.
Step 7: STOP.*/

#include <stdio.h>

int main()
{
    int num, n, newNum;
    printf("Enter any number: ");           // Input number from user 
    scanf("%d", &num);

    printf("Enter nth bit to clear (0-31): ");       // Input bit number you want to clear
    scanf("%d", &n);
    newNum = num & (~(1 << n));               // Left shifts 1 to n times and perform complement of above then finally perform bitwise AND with num and result 
    printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o clearn clearn.c
~/New task/ $ ./clearn
Enter any number: 12
Enter nth bit to clear (0-31): 3
Number before clearing 3 bit: 12 (in decimal)
Number after clearing 3 bit: 4 (in decimal)*/
