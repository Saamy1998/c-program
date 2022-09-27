/*Algorithm
Step 1: START.
Step 2: Initialize an integer values as num.
Step 3: Declare the number from user.
Step 4: If function isEven returns 1 then the number is even else the number is odd.
Step 5: Print the number is even when it returns 1 else number is odd
Step 6: STOP.

Algorithm for isEven(int num)
Step 1: START.
Step 2: Return 1 then the number is even else the number is odd(!(num&1)).
Step 3: STOP.*/

#include <stdio.h>

int isEven(int num)                          // Function to check even or odd
{
    return !(num & 1);                       // Returns 1 is num is even otherwise 0
}

int main()
{
    int num;
    printf("Enter any number: ");             // Input number from user
    scanf("%d", &num);
    if(isEven(num))                           // If isEven() function returns 1 then the number is even
    {
        printf("The number is even.");
    }
    else                                      // Else the number is odd
    {
        printf("The number is odd.");
    }
    //printf("%d",isEven(num));
    return 0;
}

/*OUTPUT

~/Function/ $ gcc -o oddeven oddeven.c
~/Function/ $ ./oddeven
Enter any number: 765
The number is odd.~/Function/ $ ./oddeven
Enter any number: 874
The number is even.*/
