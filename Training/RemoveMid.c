/*Algorithm
Step 1: START.
Step 2: Declare four integer variables.
Step 3: Get the number of elements in the array.
Step 4: Get the elements.
Step 5: Enter the position where you want to delete the element.
Step 6: Cheak FOR condition.
Step 7: If condition is true goto step 8 otherwise goto step 9.
Step 8: a[i] = a[i+1] and goto step 6.
Step 9: Print final array after inserting the value
Step 10: STOP.*/

#include <stdio.h>
#include <conio.h>

int main ()
{
    int a[50];
    int pos,i,num;
    printf ("Enter the number of elements in an array= ");
    scanf ("%d",&num);
    printf ("Enter %d elements in array= ", num);
    for (i = 0; i < num; i++ )                                                     // use for loop to insert elements one by one in array
    {
        scanf ("%d",&a[i]);
    }
    printf("Enter the position where you want to remove the element= \n ");        // enter the position of the element to be deleted
    scanf (" %d", &pos);
    for (i = pos - 1; i < num -1; i++)                                             // use for loop to delete the element and update the index
    {
        a[i] = a[i+1];                                                             // assign arr[i+1] to arr[i]
    }
    printf ("Final array after inserting the value is= \n");
    for (i = 0; i< num - 1; i++)                                                   // display the final array
    {
        printf (" %d \n", a[i]);
    }

    return 0;
}

/*OUTPUT
Enter the number of elements in an array= 4
Enter 4 elements in array= 28
75
43
91
Enter the position where you want to remove the element=
 1
Final array after inserting the value is=
 75
 43
 91

Process returned 0 (0x0)   execution time : 12.395 s
Press any key to continue.

Enter the number of elements in an array= 6
Enter 6 elements in array= 19
98
65
39
48
72
Enter the position where you want to remove the element=
 4
Final array after inserting the value is=
 19
 98
 65
 48
 72

Process returned 0 (0x0)   execution time : 15.936 s
Press any key to continue.*/

