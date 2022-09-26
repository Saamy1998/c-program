/*Algorithm
Step 1: START.
Step 2: Initialize a integer.
Step 3: Declare the month number from user.
Step 4: If the user enters the number is from 1 to 12 then follows the below cases else follows the default case and exit the case.
Step 5: Switch(operation)
       a) case 1
            Print as 31 days
            Break the case
       b) case 2
            Print as 28/29 days
            Break the case
       c) case 3:
            Print as 31 days
            Break the case
       d) case 4
            Print as 30 days
            Break the case
       e) case 5
            Print as 31 days
            Break the case
       f) case 6
            Print as 30 days
            Break the case
       g) case 7
            Print as 31 days
            Break the case
       h) case 8
            Print as 31 days
            Break the case
       i) case 9
            Print as 30 days
            Break the case
       j) case 10
            Print as 31 days
            Break the case
       k) case 11
            Print as 30 days
            Break the case
       l) case 12
            Print as 31 days
            Break the case
       m) default
            printf("Invalid input! Please enter month number between 1-12.")
Step 6: STOP.*/

#include <stdio.h>

int main()
{
    int month;
    printf("Enter month number(1-12): ");           // Input month number from user 
    scanf("%d", &month);

    switch(month)                                   // For printing the number of days in the month
    {
        case 1:
            printf("31 days");
            break;
        case 2:
            printf("28/29 days");
            break;
        case 3:
            printf("31 days");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days");
            break;
        case 6:
            printf("30 days");
            break;
        case 7:
            printf("31 days");
            break;
        case 8:
            printf("31 days");
            break;
        case 9:
            printf("30 days");
            break;
        case 10:
            printf("31 days");
            break;
        case 11:
            printf("30 days");
            break;
        case 12:
            printf("31 days");
            break;
        default:
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}

/*OUTPUT

~/Switchcase/ $ gcc -o month month.c
~/Switchcase/ $ ./month
Enter month number(1-12): 4
30 days~/Switchcase/ $ ./month
Enter month number(1-12): 19
Invalid input! Please enter month number between 1-12~/Switchcase/ $ ./month
Enter month number(1-12): 9
30 days*/
