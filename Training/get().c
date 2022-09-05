/*Algorithm
Step 1: START.
Step 2: Declare a character array. 
Step 3: Get the input from the user.
Step 4: Print the string.
Step 5: STOP.*/

#include <stdio.h>

int main()
{
    char buf[50];                       /*Declare a character array*/

    printf("Enter a string: ");
    gets(buf);                          /* Get input from user*/
    printf("\nstring is: %s\n", buf);   /* Prints the output string*/

    return 0;
}

/*OUTPUT
Enter a string: Aravindha Saamy

string is: Aravindha Saamy

Process returned 0 (0x0)   execution time : 7.638 s
Press any key to continue.*/
