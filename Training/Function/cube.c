/*Algorithm
Step 1: START.
Step 2: Initialize two integer as num and c.
Step 3: Declare the number from user.
Step 4: Call cube function and assign it to c.
Step 5: Print the value of c
Step 6: STOP.

/*Algorithm for cube(int num)
Step 1: START.
Step 2: Return num*num*num.
Step 3: STOP.*/

#include <stdio.h>

int cube(int num);                          // Function declaration

int main()
{
    int num;
    int c; 
    printf("Enter any number: ");           // Input number to find cube from user 
    scanf("%d", &num);
    c = cube(num);
    printf("Cube of %d is %d", num, c);
    return 0;
}

int cube(int num)                           // Function to find cube of any number
{
    return (num * num * num);
}

/*OUTPUT

~/Function/ $ gcc -o cube cube.c
~/Function/ $ ./cube                                                                                                                                                   
Enter any number: 4
Cube of 4 is 64~/Function/ $ ./cube
Enter any number: 98
Cube of 98 is 941192~/Function/ $ ./cube
Enter any number: 165
Cube of 165 is 4492125*/
