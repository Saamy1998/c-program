/*Algorithm
Step 1: START.
Step 2: Initialize an integer as num and long integer as fibonacci.
Step 3: Declare the number to find nth term in fibonacci from user.
Step 4: Assign function fibo(int num) value to fibonacci.
Step 5: Print the fibonacci nth term of the number.
Step 6: STOP.

Algorithm fact(int num)
Step 1: START.
Step 2: IF num is equals to zero, then return zero.
Step 3: Else IF num is equals to one , then return one
Step 4: Else return fibo(num-1) + fibo(num-2) for finding the fibonacci's nth term of the number.
Step 5: STOP.*/

#include <stdio.h>

unsigned long long fibo(int num);                                // Function declaration

int main()
{
    int num;
    unsigned long long fibonacci;
    printf("Enter any number to find nth fiboacci term: ");     // Input a number from user
    scanf("%d", &num);
    fibonacci = fibo(num);
    printf("%d fibonacci term is %llu", num, fibonacci);
    return 0;
}

unsigned long long fibo(int num)                                // Recursive function to find nth Fibonacci term
{
    if(num == 0)                                                //Base condition
        return 0;
    else if(num == 1)                                           //Base condition
        return 1;
    else
        return fibo(num-1) + fibo(num-2);
}

/*OUTPUT

~/Function/ $ gcc -o fibonacci fibonacci.c
~/Function/ $ ./fibonacci
Enter any number to find nth fiboacci term: 10
10 fibonacci term is 55~/Function/ $ ./fibonacci
Enter any number to find nth fiboacci term: 15
15 fibonacci term is 610*/
