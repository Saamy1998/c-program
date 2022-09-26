/*Algorithm
Step 1: START.
Step 2: Initialize two integer and one character.
Step 3: Declare the integers and operator from user.
Step 4: Switch(op)
       a) case +
            Assign addition of num1 and num2 to result 
            Break the case
       b) case -
            Assign subraction of num1 and num2 to result 
            Break the case
       c) case *
            Assign multiplication of num1 and num2 to result 
            Break the case     
       d) case /
            Assign division of num1 and num2 to result 
            Break the case    
       e) defult
            Print operators numbers
Step 5: Print the result.            
Step 6: STOP.*/

#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result=0.0f;
    printf("Enter two number: ");
    scanf("%f%f", &num1,&num2);                                              // Input two number from user
    printf("Enter the operator: ");                            
    scanf("%s", &op);                                                        // Input operator from user 
    switch(op)                                                               // Switch the value and perform action based on operator
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);                    // Prints the result 

    return 0;
}

/*OUTPUT

~/Switchcase/ $ gcc -o calc simplecalc.c
~/Switchcase/ $ ./calc
Enter two number: 7
9
Enter the operator: *
7.00 * 9.00 = 63.00~/Switchcase/ $ ./calc
Enter two number: 4568
7654
Enter the operator: -
4568.00 - 7654.00 = -3086.00~/Switchcase/ $ ./calc
Enter two number: 45
98
Enter the operator: /
45.00 / 98.00 = 0.46~/Switchcase/ $ ./calc
Enter two number: 43
76
Enter the operator:+
43.00 + 76.00 = 119.00~/Switchcase/ $ ./calc
Enter two number: 65
32
Enter the operator: ^
Invalid operator65.00 ^ 32.00 = 0.00*/
