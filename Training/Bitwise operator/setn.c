/*Algorithm
Step 1: START.
Step 2: Initialize three integer.
Step 3: Declare the number from user.
Step 4: Declare the nth bit to set from user.
Step 5: Left shift 1 for n times and perform bitwise OR with num and assign to newNum.
Step 6: Print the nth bit set after the setting.
Step 7: STOP.*/

#include <stdio.h>

int main()
{
    int num, n, newNum;
    printf("Enter any number: ");                  // Input number from user
    scanf("%d", &num);
    printf("Enter nth bit to set (0-31): ");       // Input bit position you want to set
    scanf("%d", &n);
    newNum = (1 << n) | num;                       // Left shift 1, n times and perform bitwise OR with num
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
    printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}

/*OUTPUT
~/New task/ $ gcc -o setn setn.c
~/New task/ $ ./setn
Enter any number: 12
Enter nth bit to set (0-31): 0
Number before setting 0 bit: 12 (in decimal)
Number after setting 0 bit: 13 (in decimal)
~/New task/ $ ./setn
Enter any number: 6
Enter nth bit to set (0-31): 5
Number before setting 5 bit: 6 (in decimal)
Number after setting 5 bit: 38 (in decimal)*/
