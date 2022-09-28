/*Algorithm
Step 1: START.
Step 2: Initialize two integer as start and end
Step 3: Declare the lower limit and upper limit from user.
Step 4: Print the strong numbers by printPerfect function
Step 5: STOP.

Algorithm for isPerfect(int num)
Step 1: START.
Step 2: Initialize two integer as i, sum.
Step 3: Assign zero to sum.
Step 4: Check FOR condition to be in the range,condition fales goto step 6.
Step 5: Check IF num modulo i is equles to zero, then increment sum with i and goto step 4.. 
Step 6: Return 1 if num is equals to sum else return o.
Step 7: STOP.

Algorithm for  printPerfect(int start, int end)
Step 1: START.
Step 2: Check WHILE condition for the to be in limits.
Step 3: Check IF condition for the number is perfect or not.
Step 4: Print the value if it is true.
Step 5: STOP.*/


#include <stdio.h>

int isPerfect(int num);                                // Function declarations 
void printPerfect(int start, int end);



int main()
{
    int start, end;
    printf("Enter lower limit and upper limit to print perfect numbers: ");         // Input lower and upper limit to print perfect numbers
    scanf("%d %d", &start, &end);
    printf("All perfect numbers between %d to %d are: \n", start, end);
    printPerfect(start, end);
    return 0;
}

int isPerfect(int num)                                 // Check whether the given number is perfect or not.
{
    int i, sum;
    sum = 0;                             
    for(i=1; i<num; i++)                              // Finds sum of all proper divisors
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    if(sum == num)                                      // If sum of proper positive divisors equals to given number then the number is perfect number
        return 1;                                       // Returns 1 if the number is perfect.
    else
        return 0;                                       // Returns 0 if the number is not perfect.
}

void printPerfect(int start, int end)                       // Print all perfect numbers between given range start and end.
{
    while(start <= end)                                     // Iterates from start to end
    {
        if(isPerfect(start))
        {
            printf("%d, ", start);
        }
        start++;
    }
}

/*OUTPUT
~/Function/ $ gcc -o perfect perfect.c
~/Function/ $ ./perfect
Enter lower limit and upper limit to print perfect numbers: 1
1000
All perfect numbers between 1 to 1000 are: 
6, 28, 496, ~/Function/ $ ./perfect
Enter lower limit and upper limit to print perfect numbers: 1
10000
All perfect numbers between 1 to 10000 are: 
6, 28, 496, 8128*/
