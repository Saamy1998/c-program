/*Algorithm
Step 1: START.
Step 2: Initialize an integer as num and long integer as factorial.
Step 3: Declare the number from user.
Step 4: Assign function fact(int num) value to factorial.
Step 5: Print the factorial of the number.
Step 6: STOP.

Algorithm fact(int num)
Step 1: START.
Step 2: IF num is equals to zero, then return one.
Step 3: Else return num * fact(num - 1) for finding the factorial of the number.
Step 4: STOP.*/
  
#include <stdio.h>

unsigned long long fact(int num);                    // Function declaration

int main()
{
    int num;
    unsigned long long factorial;
    printf("Enter any number: ");                            // Input an integer from user 
    scanf("%d", &num);
    factorial = fact(num);                                   // Call factorial function
    printf("Factorial of %d is %llu", num, factorial);
    return 0;
}

unsigned long long fact(int num)                            // Function to compute and return factorial of any number recursively.
{
    if(num == 0)
        return 1;
    else
        return num * fact(num - 1);
}

/*OUTPUT
~/Function/ $ gcc -o factorial factorial.c
~/Function/ $ ./factorial
Enter any number: 4
Factorial of 4 is 24~/Function/ $ ./factorial
Enter any number: 12
Factorial of 12 is 479001600*/
