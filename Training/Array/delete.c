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
~/Array/ $ gcc -o delete delete.c
~/Array/ $ ./delete
Enter the number of elements in an array= 5
Enter 5 elements in array= 3
7
9
65
45
Enter the position where you want to remove the element= 
 3
Final array after inserting the value is= 
 3 
 7 
 65 
 45 */
