/*Algorithm
Step 1: START.
Step 2: Declare the array elements.
Step 3: Get the number of elements in the array.
Step 4: Get the elements.
Step 5: Check NESTED FOR LOOP condition.
Step 6: If the condition is true goto step 7 otherwise goto step 11.
Step 7: If i is not equal j then goto step 8 otherwise goto step 9.
Step 8: If (a[i]==a[j]) is true then add 1 with cout
Step 9: If count is greater then or equal to 1 goto step 10
Step 10: Print the a[i] and goto step 5.
Step 11: STOP.*/

#include <stdio.h>
#include <conio.h>
int main ()
{
    int a[20],i,j,size,count=0;
    printf ("Enter the number of elements in an array= ");
    scanf (" %d", &size);
    printf ("\nEnter %d elements of an array= ",size);
    for (i=0;i<size;i++)                  // use for loop to enter the elements one by one in an array
    {
        scanf ("%d",&a[i]);
    }
    for (i=0;i<size;i++)                 // use nested for loop to find the unique elements in array
    {
        for (j=i;j<size;j++)
        {
            if(i!=j)                     // use if statement to check unique element
            {
            if (a[i]==a[j])
            {
               count++;
            }
            }
        }
        if(count>>0)
        {
            printf("%d",a[i]);           //print the repeated number
        }
        count=0;
    }
    return 0;
}
/*OUTPUT
Enter the number of elements in an array= 7

Enter 7 elements of an array= 2
2
3
4
4
5
5
245
Process returned 0 (0x0)   execution time : 14.419 s
Press any key to continue.*/


