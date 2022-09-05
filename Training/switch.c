/*Algorithm
Step 1: START.
Step 2: Declare a integer 'i' and character array 'a[i]'.
Step 3: Get value from the user.
Step 4: Check the FOR condition
Step 5: If the condition i is less than the array length is true,then goto step 6 otherwise goto step 14.
Step 6: Switch condition for a[i].
Step 7: Case condition 1 is if a[i] is Uppercase, then goto step 8 otherwise goto 9.
Step 8: Print a[i] is Uppercase, break the switch statement and goto step4.
Step 9: Case condition 2 is if a[i] is Lowercase, then goto step 8 otherwise goto 10.
Step 10: Print a[i] is Lowercase, break the switch statement and goto step4.
Step 12: Case condition 3 is if a[i] is digit, then goto step 8 otherwise goto 13.
Step 13: Print a[i] is digit, break the switch statement and goto step4.
Step 14: STOP.*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[50];
    int i;
    printf("Enter a value= ");
    scanf("%s/n",a);
    for(i = 0; i < strlen(a); i++)
    {
        switch(a[i])
        {
        case 'A'...'Z':
            printf("%c is Uppercase\n",a[i]);
            break;
        case 'a'...'z':
            printf("%c is Lowercase\n",a[i]);
            break;
        case '1'...'9':
            printf("%c is Digit\n",a[i]);
            break;
        default:
            break;
        }
    }

return 0;
}


/*OUTPUT
Enter a value= AravindhaSaamy1998
A is Uppercase
r is Lowercase
a is Lowercase
v is Lowercase
i is Lowercase
n is Lowercase
d is Lowercase
h is Lowercase
a is Lowercase
S is Uppercase
a is Lowercase
a is Lowercase
m is Lowercase
y is Lowercase
1 is Digit
9 is Digit
9 is Digit
8 is Digit

Process returned 0 (0x0)   execution time : 8.596 s
Press any key to continue.*/
