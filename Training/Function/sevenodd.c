/*Algorithm
Step 1: START.
Step 2: Initialize two integer as strat and end
Step 3: Declare the start range of the number from user.
Step 4: Declare the end range of the number from user.
Step 5: Assign function printEven(int start, int end) to seven and print the sum of even numbers.
Step 6: Assign function printOdd(int start, int end) to sodd and print the sum of odd numbers.
Step 7: STOP.

Algorithm for printEven(int start, int end)
Step 1: START.
Step 2: Initialize static integer sumeven.
Step 3: Check IF start is greater then end.
Step 4: Return 0 else Check IF the number is divisible by 2.
Step 5: If it is true then add sumeven to start.
Step 6: Recursively call to printEven to get next value
Step 7: Return the sumeven
Step 8: STOP.

Algorithm for printOdd(int start, int end)
Step 1: START.
Step 2: Initialize static integer sumodd.
Step 3: Check IF start is greater then end.
Step 4: Return 0 else Check IF the number is not divisible by 2.
Step 5: If it is true then add sumodd to start.
Step 6: Recursively call to printOdd to get next value
Step 7: Return the sumodd
Step 8: STOP.*/

#include <stdio.h>

int printEven(int start, int end);                          // Function declaration
int printOdd(int start, int end);

int main()
{
    int start, end;
    int seven, sodd;
    printf("Enter the number to start: ");                  //Input lower limit from user
    scanf("%d", &start);
    printf("Enter the number to end: ");                    //Input upper limit from user
    scanf("%d", &end);
    seven = printEven(start, end);
    printf("Sum of even numbers are- %d\n", seven);                        // Prints the even number
    sodd = printOdd(start, end);
    printf("sum of odd numbers are- %d\n", sodd);                         // Prints the odd number
}

int printEven(int start, int end)                           // Recursive function to print even numbers in a given range.
{
    static int sumeven=0;
    if (start > end)
        return 0;
    if (start % 2 == 0)                                     // Check the number is divisible by 2
        sumeven+=start;
    printEven(start+1, end);                                // Recursively call to printEven to get next value
    return sumeven;
}

int printOdd(int start, int end)                            //Recursive function to print odd numbers in a given range.
{
    static int sumodd=0;
    if (start > end)
        return 0;
    if (start % 2 != 0)                                     // Check the number is not divisible by 2
        sumodd+=start;

    printOdd(start+1, end);                                 // Recursively call to printOdd to get next value
    return sumodd;

}

/*OUTPUT

~/Function/ $ gcc -o sevenodd  sevenodd.c
~/Function/ $ ./ sevenodd
Enter the number to start: 1
Enter the number to end: 50
Sum of even numbers are- 650
sum of odd numbers are- 625
~/Function/ $ ./ sevenodd
Enter the number to start: 1
Enter the number to end: 100
Sum of even numbers are- 2550
sum of odd numbers are- 2500*/
