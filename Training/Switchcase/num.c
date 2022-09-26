/*Algorithm
Step 1: START.
Step 2: Initialize two integer.
Step 3: Declare the integers from user.
Step 4: Switch(num1>num2)
       a) case 0
            Print as num2 is maximum
            Break the case
       b) case 1
            Print as num1 is maximun
            Break the case
Step 5: STOP.*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers to find maximum: ");              // Input two numbers from user 
    scanf("%d%d", &num1, &num2);
    switch(num1 > num2)                                         //Expression (num1 > num2) will return either 0 or 1 
    {
        case 0:                                                 // If condition (num1>num2) is false 
            printf("%d is maximum", num2);
            break;
        case 1:                                                 // If condition (num1>num2) is true 
            printf("%d is maximum", num1);
            break;
    }

    return 0;
}

/*OUTPUT

~/Switchcase/ $ gcc -o num num.c
~/Switchcase/ $ ./num
Enter two numbers to find maximum: 729
859  
859 is maximum~/Switchcase/ $ ./num
Enter two numbers to find maximum: 629
492
629 is maximum*/
