/*Algorithm
Step 1: START.
Step 2: Initialize two integer as size, i and two integer array as source[100] and dest[100].
Step 3: Declare the size of array from user.
Step 4: Declare the array element from the user using FOR loop.
Step 5: Check FOR condition, for iterating the array elements.
Step 6: Copy the array elements to dest array and print the array elements in dest array
Step 7: STOP.*/

#include <stdio.h>

int main()
{
    int source[100], dest[100];
    int i, size;

    /* Input size of the array */
    printf("Enter the size of the array : ");                     // Input size of the array
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements of source array : ");                  // Input array elements
    for(i=0; i<size; i++)
    {
        scanf("%d", &source[i]);
    }
    printf("Elements of dest array are : ");
    for(i=0; i<size; i++)                                          // Copy and Print all elements from current array to dest array
    {
        dest[i] = source[i];
        printf("%d ", dest[i]);
    }

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o copy copy.c 
~/Array/ $ ./copy
Enter the size of the array : 7
Enter elements of source array : 34
94
67
59
42
86
94
Elements of dest array are : 34 94 67 59 42 86 94*/
