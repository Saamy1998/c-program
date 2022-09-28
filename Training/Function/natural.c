/*Algorithm
Step 1: START.
Step 2: Initialize teo integer lowerLimit and upperLimit.
Step 3: Assign one to lowerlimit and declare the upperlimt from user.
Step 4: Print the natural numbers by the function printNaturalNumbers(int lowerLimit, int upperLimit).
Step 5: STOP.

Algorithm for printNaturalNumbers(int lowerLimit, int upperLimit)
Step 1: START.
Step 2: Check IF lowerLimit is greater then upperlimit, if it is true then return.
Step 3: Print the lowerlimit
Step 4: Recursively call the function to print next number
Step 5: STOP.*/

#include <stdio.h>

void printNaturalNumbers(int lowerLimit, int upperLimit);              // Function declaration 

int main()
{
    int lowerLimit, upperLimit;
    lowerLimit=1;
    printf("Enter nth value of the number: ");                         //Input upper limit from user
    scanf("%d", &upperLimit);
    printf("All natural numbers from %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);
    return 0;
}

void printNaturalNumbers(int lowerLimit, int upperLimit)              // Recursively prints all natural number between the given range. 
{
    if(lowerLimit > upperLimit)
        return;
    printf("%d, ", lowerLimit);
    printNaturalNumbers(lowerLimit + 1, upperLimit);                  // Recursively call the function to print next number
}

/*OUTPUT

~/Function/ $ gcc -o natural natural.c
~/Function/ $ ./natural
Enter nth value of the number: 100
All natural numbers from 1 to 100 are: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100*/
