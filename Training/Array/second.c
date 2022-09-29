/*Algorithm
Step 1: START.
Step 2: Initialize four integer as size, i, max1, max2 and one array as arr[100].
Step 3: Declare the size of array in N from user.
Step 4: Declare the array element from the user usinf FOR loop.
Step 5: Assign zero to max1 and max2
Step 6: Check FOr condition, for finding second largest element.
Step 7: IF current array element is graeter then max1, then assign max1 to max2 and current array element to max1.
Step 8: Else check IF current array element is less than first largest but is greater than second largest then make it second largest.
Step 9: Then assign current array element to second largest and goto step 6.
Step 10: Print the second largest element in array.
Step 11: STOP.*/

#include <stdio.h>

int main()
{
    int arr[100], size, i;
    int max1, max2;
    printf("Enter size of the array: ");                      // Input size of the array
    scanf("%d", &size);
    printf("Enter elements in the array: ");                  // Input array elements
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max1 = max2 = 0;
    for(i=0; i<size; i++)                                     // Check for second largest
    {
        if(arr[i] > max1)
        {
            max2 = max1;            // If current element of the array is first largest then make current max as second max
            max1 = arr[i];          // and then max as current array element
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];           // If current array element is less than first largest but is greater than second largest then make it second largest
        }
    }
    printf("Second largest array element= %d", max2);

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o second second.c
~/Array/ $ ./second
Enter size of the array: 5
Enter elements in the array: 984
345
753
593
882
Second largest array element= 882*/
