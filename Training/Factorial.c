/*Algorithm
Step 1: START.
Step 2: Declare three integer i,a and fact.
Step 3: Get value of a.
Step 4: Cheak FOR condition.
Step 5: If the condition is true then goto step 6 otherwise goto step 7.
Step 6: fact = fact*i and goto step 4.
Step 7: Print fact
Step 8: STOP.*/

#include<stdio.h>
int main()
{
 int i,fact=1,a;
 printf("Enter a number: ");
  scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      fact=fact*i;                
    }
  printf("Factorial of %d is: %d",a,fact);
return 0;
}

/*OUTPUT
Enter a number: 8
Factorial of 8 is: 40320
Process returned 0 (0x0)   execution time : 2.678 s
Press any key to continue.

Enter a number: 4
Factorial of 4 is: 24
Process returned 0 (0x0)   execution time : 2.342 s
Press any key to continue.*/
