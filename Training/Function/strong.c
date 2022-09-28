/*Algorithm
Step 1: START.
Step 2: Initialize two integer as start and end
Step 3: Declare the lower limit and upper limit from user.
Step 4: Print the strong numbers by printStrongNumbers function
Step 5: STOP.

Algorithm for printStrongNumber(int start, int end)
Step 1: START.
Step 2: Initialize an integer and one long integer.
Step 3: Check WHILE condition to be in the limits.
Step 4: Assign zero to sum and start value to num.
Step 5: Chech WHILE condition to calculate sum of factorial of digits.
Step 6: Check IF sum of factorial of digits equal to current number.
Step 7: Print start value if it is equal and increment the start value by one.
Step 8: STOP.

Algorithm for fact(int num)
Step 1: START.
Step 2: Check IF num is equal to zero.
Step 3: If it is zero return 1 elae return num * fact(num-1).
Step 4: STOP.*/

#include <stdio.h>

long long fact(int num);                                             // Function declaration
void printStrongNumbers(int start, int end);

int main()
{
    int start, end;
    printf("Enter the lower limit and upper limit to find strong number: ");         // Input start and end range
    scanf("%d %d", &start,&end);
    printf("All strong numbers between %d to %d are: \n", start, end);
    printStrongNumbers(start, end);

    return 0;
}

void printStrongNumbers(int start, int end)                          // Print all strong numbers in a given range
{
    long long sum;
    int num;
    while(start != end)                                              // Iterates from start to end
    {           
        sum = 0;
        num = start;
        while(num != 0)                                              // Calculate sum of factorial of digits
        {
            sum += fact(num % 10);
            num /= 10;
        }
        if(start == sum)                                             // If sum of factorial of digits equal to current number
        {
            printf("%d, ", start);
        }
        start++;
    }
}

long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}

/*OUTPUT 
~/Function/ $ gcc -o strong strong.c
~/Function/ $ ./strong
Enter the lower limit to find strong number: 1
Enter the upper limit to find strong number: 1000
All strong numbers between 1 to 1000 are: 
1, 2, 145*/
