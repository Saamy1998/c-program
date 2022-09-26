/*Algorithm
Step 1: START.
Step 2: Initialize a integer.
Step 3: Declare the week number from user.
Step 4: If the user enters the number is from 1 to 7 then follows the below cases else follows the default case and exit the case.
Step 5: Switch(operation)
       a) case 1
            Print as Monday
            Break the case
       b) case 2
            Print as Tuesday
            Break the case
       c) case 3:
            Print as Wednesday
            Break the case
       d) case 4
            Print as Thursday
            Break the case
       e) case 5
            Print as Friday
            Break the case
       f)case 6
            Print as Saturday
            Break the case
       g) case 7
            Prints as Sunday
            Break the case
       h) default
            printf("Invalid input! Please enter week number between 1-7.")
Step 6: STOP.*/


#include <stdio.h>

int main()
{
    int week;
    printf("Enter week number(1-7): ");                 // Input week number from user
    scanf("%d", &week);
    switch(week)                                        // Prints the day of week name 
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}

/*OUTPUT
~/Switchcase/ $ gcc -o week week.c
~/Switchcase/ $ ./week
Enter week number(1-7): 5
Friday~/Switchcase/ $ ./week
Enter week number(1-7): 2
Tuesday~/Switchcase/ $ ./week
Enter week number(1-7): 8
Invalid input! Please enter week number between 1-7*/
