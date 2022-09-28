/*Algorithm
Step 1: START.
Step 2: Initialize three integer as b, p and res
Step 3: Declare the base of the number from user.
Step 4: Declare the power of the number from user.
Step 5: Assign fun(int a, int b) value to res
Step 5: print the value of res.
Step 6: STOP.

Algorithm for fun(int a,int b)
Step 1: START.
Step 2: Check IF b is greater then zero.
Step 3: Return a*fun(a,b-1) if the condition is true else return 1.
Step 4: STOP.*/


#include<stdio.h>

int fun(int a,int b);

int main()
    {
        int b,p,res;
        printf("Enter the base of the number\n");
        scanf("%d",&b);
        printf("Enter the power of the number\n");
        scanf("%d",&p);
        res=fun(b,p);
        printf("The number is: %d", res);
    }

int fun(int a,int b)
    {
        if(b>0)
            return(a*fun(a,b-1));
        else
            return(1);
    }

/*OUTPUT

~/Function/ $ gcc -o power power.c
~/Function/ $ ./power
Enter the base of the number
6
Enter the power of the number
4
The number is: 1296~/Function/ $ ./power
Enter the base of the number
54
Enter the power of the number
2
The number is: 291*/
