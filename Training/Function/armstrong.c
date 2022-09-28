/*Algorithm
Step 1: START.
Step 2: Initialize two integer as start and end
Step 3: Declare the lower limit and upper limit from user.
Step 4: Print the strong numbers by printArmstrong function
Step 5: STOP.

Algorithm for isArmstrong(int start, int end)
Step 1: START.
Step 2: Initialize four integer as temp, lastDigit, sum and digit.
Step 3: Assign num value to temp, zero to sum  and log10(num) plues one to digit(total digits in num).
Step 4: Check WHILE condition, if it is true goto step 5 else goto step 8.
Step 5: lastDigit = temp % 10 for extracting the last digit.
Step 6: sum =sum + round(pow(lastDigit, digits)) for compute sum of power of last digit.
Step 7: temp /= 10 for removing the last digit.
Step 8: Return 1 if num is equals to sum else return o.
Step 9: STOP.

Algorithm for printArmstrong(int start, int end)
Step 1: START.
Step 2: Check WHILE condition for the to be in limits.
Step 3: Check IF condition for the number is armstrong or not.
Step 4: Print the value if it is true.
Step 5: STOP.*/

#include <stdio.h>
#include <math.h>

int isArmstrong(int num);                           // Function declarations
void printArmstrong(int start, int end);



int main()
{
    int start, end;
    printf("Enter lower limit and upper limit to print armstrong numbers: ");                    // Input lower and upper limit to of armstrong numbers
    scanf("%d %d", &start, &end);
    printf("All armstrong numbers between %d to %d are: \n", start, end);
    printArmstrong(start, end);

    return 0;
}

int isArmstrong(int num)                           // Check whether the given number is armstrong number or not.
{
    int temp, lastDigit, sum, digit;
    temp = num;
    sum = 0;
    digit = (int) log10(num) + 1;                    // Find total digits in num
    while(temp > 0)
    {
        lastDigit = temp % 10;                               // Extract the last digit
        sum = sum + round(pow(lastDigit, digit));            // Compute sum of power of last digit
        temp = temp / 10;                                    // Remove the last digit
    }
    if(num == sum)
        return 1;                                   // Returns 1 if the number is armstrong
    else
        return 0;                                   // Returns 0 if the number is not armstrong
}

void printArmstrong(int start, int end)             // Print all armstrong numbers between start and end.
{
    while(start <= end)                             // Iterates from start to end
    {
        if(isArmstrong(start))
        {
            printf("%d, ", start);                  // Print the current number if it is armstrong
        }
        start++;
    }
}

/*OUTPUT

~/Function/ $ gcc -o armstrong armstrong.c -lm
~/Function/ $ ./armstrong
Enter lower limit and upper limit to print armstrong numbers: 1
1000
All armstrong numbers between 1 to 1000 are:
1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, ~/Function/ $ ./armstrong
Enter lower limit and upper limit to print armstrong numbers: 1
100000
All armstrong numbers between 1 to 100000 are:
1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727, 93084*/
