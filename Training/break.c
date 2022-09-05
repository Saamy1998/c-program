/*Algorithm
Step 1: START.
Step 2: Declare two integer a and b.
Step 3: Get value of a.
Step 4: Assign a to b.
Step 5: Cheak WHILE condition.
Step 6: If a is true then goto step 7 otherwise goto step9
Step 7: Print a and add by 1 then goto step 8.
Step 8: If a is greater than (b+5) is true then break the loop and goto step 9 otherwise goto step 5. 
Step 9: STOP.*/

#include <stdio.h>

int main () 
{
   int a,b;
   printf("Enter the value= ");
   scanf("%d",&a);
   b=a;
   while(a)              /* Cheak a is true*/
   {
       printf("%d\n",a);
       a++;

       if(a>(b+5))
        {
           break;        /* terminate the loop using break statement */
        }
   }

   return 0;
}
/*OUTPUT
Enter the value= 7
7
8
9
10
11
12

Process returned 0 (0x0)   execution time : 2.969 s
Press any key to continue.

Enter the value= 99
99
100
101
102
103
104

Process returned 0 (0x0)   execution time : 3.073 s
Press any key to continue.*/
