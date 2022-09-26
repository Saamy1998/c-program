/*Algorithm
Step 1: START.
Step 2: Initialize an integer.
Step 3: Declare the integer from user.
Step 4: Switch(num>0)
       a) case 1
            Print as number is positive
            Break the case
       b) case 0
            Switch(num<0)
               i) case 1
                  Print as number is negative
                  Break the case
               ii) case 0   
                  Print as number is zero
                  Break the case
             Break the case     
Step 5: STOP.*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number: ");                   // Input any numbers from user
    scanf("%d", &num);
    switch (num > 0)
    {
        case 1:                                     // Num is positive
            printf("%d is positive.", num);
        break;
        case 0:                                     // Num is either negative or zero
            switch (num < 0)
            {
                case 1:
                    printf("%d is negative.", num);
                    break;
                case 0:
                    printf("%d is zero.", num);
                    break;
            }
        break;
    }

    return 0;
}

/*OUTPUT

~/Switchcase/ $ gcc -o positive positive.c
~/Switchcase/ $ ./positive
Enter any number: 26
26 is positive.~/Switchcase/ $ ./positive
Enter any number: -73 
-73 is negative.~/Switchcase/ $ ./positive
Enter any number: 0
0 is zero.*/
