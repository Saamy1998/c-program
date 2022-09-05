/*Algorithm
Step 1: START.
Step 2: Declare a integer 'i' and get input from user.
Step 3: If i is greater than or equal to 1 and lesser than or equal to  100 goto step 5 otherwise goto step 5.
Step 4: Print the number range 1 to 100.
Step 5: If i is greater than or equal to 101 and lesser than or equal to  200 goto step 6 otherwise goto step 7.
Step 6: Print the number range 1 to 100.
Step 7: If i is greater than or equal to 201 and lesser than or equal to  300 goto step 8 otherwise goto step 9.
Step 8: Print the number range 1 to 100.
Step 9: Print the number is not in the range of 1 to 300.
Step 10: STOP.*/

#include<stdio.h>

int main()
{
    int i;
    printf("Enter the Number= ");
    scanf("%d/n",&i);
    if(i>=1 && i<=100)                            /*Check if the given number is in range of 1 to 100*/
    {
        printf("The number range is 1 to 100");
    }
    else if(i>=101 && i<=200)                     /*Check if the given number is in range of 101 to 200*/
    {
        printf("The number range is 101 to 200");
    }
    else if(i>=201 && i<=300)                     /*Check if the given number is in range of 1201 to 1300*/
    {
        printf("The number range is 201 to 300");
    }
    else
    {
        printf("The number is not in the range of 1 to 300");
    }

    return(0);
}


/*OUTPUT

1)  Enter the Number= 57
    The number range is 1 to 100
    Process returned 0 (0x0)   execution time : 3.125 s
    Press any key to continue.

2)  Enter the Number= 159
    The number range is 101 to 200
    Process returned 0 (0x0)   execution time : 4.924 s
    Press any key to continue.
    
3)  Enter the Number= 267
    The number range is 201 to 300
    Process returned 0 (0x0)   execution time : 3.198 s
    Press any key to continue.
    
4)  Enter the Number= 478
    The number is not in the range of 1 to 300
    Process returned 0 (0x0)   execution time : 3.562 s
    Press any key to continue.*/





