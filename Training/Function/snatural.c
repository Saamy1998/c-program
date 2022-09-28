/*Algorithm
Step 1: START.
Step 2: Initialize three integer start, end and sum.
Step 3: Assign one to start and declare the nth element from user.
Step 4: Assign function sumOfNaturalNumbers(int start, int end) to sum
Step 5: Print the sum of natural numbers.
Step 6: STOP.

Algorithm for printNaturalNumbers(int lowerLimit, int upperLimit)
Step 1: START.
Step 2: Check IF start is equals to end, if it is true then return start.
Step 3: Else return start pluse function of sumOfNaturalNumbers(start + 1, end)
Step 4: STOP.*/

#include <stdio.h>

int sumOfNaturalNumbers(int start, int end);                    // Function declaration

int main()
{
    int start, end, sum;
    start=1;
    printf("Enter end limit: ");                              // Input lower and upper limit from user
    scanf("%d", &end);
    sum = sumOfNaturalNumbers(start, end);
    printf("Sum of natural numbers from %d to %d = %d", start, end, sum);
    return 0;
}

int sumOfNaturalNumbers(int start, int end)                       // Recursively find the sum of natural number
{
    if(start == end)
        return start;
    else
        return start + sumOfNaturalNumbers(start + 1, end);
}

/*OUTPUT

~/Function/ $ gcc -o snatural snatural.c
~/Function/ $ ./snatural
Enter lower limit: 1
Enter upper limit: 100
Sum of natural numbers from 1 to 100 = 5050*/
