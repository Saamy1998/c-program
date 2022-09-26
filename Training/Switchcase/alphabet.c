/*Algorithm
Step 1: START.
Step 2: Initialize a character.
Step 3: Declare the alphapet from user.
Step 4: If the user enters the alphabet as "a,e,i,o,u,A,E,I,O,U" then follows the SWITCH CASE else follows the default and exit the case
Step 5: Switch(operation)
       a) case 'a'
            Print as Vowel
            Break the case
       b) case 'e'
            Print as Vowel
            Break the case
       c) case 'i'
            Print as Vowel
            Break the case
       d) case 'o'
            Print as Vowel
            Break the case
       e) case 'u'
            Print as Vowel
            Break the case
       f) case 'A'
            Print as Vowel
            Break the case
       g) case 'E'
            Print as Vowel
            Break the case
       h) case 'I'
            Print as Vowel
            Break the case
       i) case 'O'
            Print as Vowel
            Break the case
       j) case 'U'
            Print as Vowel
            Break the case
       k) default
           Print as Consonant
Step 6: STOP.*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet: ");               // Input an alphabet from user 
    scanf("%c", &ch);
    switch(ch)                                    // For printing the character bis vowel or consonant
    {
        case 'a':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        case 'A':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }

    return 0;
}

/*OUTPUT

~/Switchcase/ $ gcc -o alp alphabet.c
~/Switchcase/ $ ./alp
Enter any alphabet: t
Consonant~/Switchcase/ $ ./alp
Enter any alphabet: i
Vowel~/Switchcase/ $ ./alp
Enter any alphabet: U
Vowel~/Switchcase/ $ ./alp
Enter any alphabet: x
Consonant*/
