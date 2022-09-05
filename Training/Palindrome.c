/*Algoritm
Step 1: START.
Step 2: Declare four integers.
Step 3: Get the number from user.
Step 4: Hold the number in temporary variable.
Step 5: Reverse the number.
Step 6: Compare the temporary number with reversed number.
Step 7: If both numbers are same, print palindrome number.
Step 8: Else print not palindrome number.
Step 9: STOP.*/

#include<stdio.h>
int main()
{
    int a,r,temp,sum;
    printf("Enter the number=");
    scanf("%d",&a);
    temp=a;                      //stored in a temporary variable
    while(a>0)                   //while loop to revers the given number
    {
        r=a%10;
        sum=(sum*10)+r;
        a=a/10;
    }
    if(temp==sum)                //compare the reversed number to the given number
    printf("The given number is palindrome number ");
    else
    printf("The given number is not palindrome");
    return 0;
}

/*OUTPUT
Enter the number=123321
The given number is palindrome number
Process returned 0 (0x0)   execution time : 3.794 s
Press any key to continue.

Enter the number=1234
The given number is not palindrome
Process returned 0 (0x0)   execution time : 1.694 s
Press any key to continue.*/

