/*Algorithm
Step 1: START.
Step 2: Initialize three integer as size, i, count and one array as arr[100].
Step 3: Declare the size of array from user.
Step 4: Declare the array element from the user using FOR loop.
Step 5: Assign zero to count.
Step 6: Check FOR condition, for iterating the array elements.
Step 7: Check IF the current element of array is less then zero.
Step 8: If it is true then increment count
Step 9: Print the count of negative element in array.
Step 10: STOP.*/


#include <stdio.h>

int main()
{
    int arr[100];
    int i, size, count = 0;
    printf("Enter size of the array : ");                 // Input size of array
    scanf("%d", &size);
    printf("Enter elements in array : ");                 // Input array elements
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)                                 // Iterate each elements in array
    {
        if(arr[i] < 0)                                    // Increment count if current array element is negative
        { 
            count++;
        }
    }
    printf("Total negative elements in array = %d", count);

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o cnegative cnegative.c
~/Array/ $ ./cnegative
Enter size of the array : 8
Enter elements in array : 2
-54
-7
-42
64
-86
59
-79
Total negative elements in array = 5*/
