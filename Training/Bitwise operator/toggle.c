/*Algorithm
Step 1: START.
Step 2: Initialize three integer.
Step 3: Declare the number from user.
Step 4: Declare the nth bit to clear from user.
Step 5: Left shifts 1, n times then perform bitwise XOR with num and assign to newNum.
Step 6: Print the number after the toggle.
Step 7: STOP.*/

#include <stdio.h>

int main()
{
    int num, n, newNum;
    printf("Enter any number: ");                      // /* Input number from user 
    scanf("%d", &num);
    printf("Enter nth bit to toggle (0-31): ");        // /* Input bit position you want to toggle 
    scanf("%d", &n);
    newNum = num ^ (1 << n);                           // Left shifts 1, n times then perform bitwise XOR with num
    printf("Number before toggling %d bit: %d (in decimal)\n", n, num);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}

/*OUTPUT

~/New task/ $ gcc -o clearn clearn.c
~/New task/ $ ./clearn
Enter any number: 12
Enter nth bit to clear (0-31): 4
Number before clearing 4 bit: 12 (in decimal)
Number after clearing 4 bit: 12 (in decimal)
~/New task/ $ ./toggle
Enter any number: 12
Enter nth bit to toggle (0-31): 2
Number before toggling 2 bit: 12 (in decimal)
Number after toggling 2 bit: 8 (in decimal)
~/New task/ $ ./toggle
Enter any number: 8
Enter nth bit to toggle (0-31): 4
Number before toggling 4 bit: 8 (in decimal)
Number after toggling 4 bit: 24 (in decimal)*/
