/*Algorithm
Step 1: START.
Step 2: Declare a character array a[100] and 2 integer i and j.
Step 3: Get the the string from the user.
Step 4: Cheak FOR condition
Step 5: If the condition is true goto step 6 otherwise goto step 8.
Step 6: If a[i] is not equal to blank then goto step 7 otherwise goto step 4.
Step 7: Count j and goto step 4.
Step 8: Print j as the count of string.
Step 13: STOP.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i,j=0;
    printf("Please enter the string= ");
    gets(a);
    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i]!=' ')                                     //This condition is used to avoid space
        {
            j++;                                         //Count the characters the the string
        }
    }
    printf("\nThe total characters of the given string= %d",j);

    return 0;
}


/*OUTPUT
Please enter the string= Aravindha Saamy

The total characters of the given string= 14
Process returned 0 (0x0)   execution time : 7.043 s
Press any key to continue.

Please enter the string= This is a sample

The total characters of the given string= 13
Process returned 0 (0x0)   execution time : 8.548 s
Press any key to continue.*/

