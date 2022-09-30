/*Algorithm
Step 1: START.
Step 2: Declare two integer variables as size, i and integer array as arr[100].
Step 3: Get the number of elements in the array.
Step 4: Get the elements using FOR loop.
Step 5: Check FOR condition for iterating the element in array in reverse order.
Step 6: Print the array in reverse order
Step 7: STOP.*/

#include <stdio.h>

int main()
{
    int arr[100];
    int size, i;
    printf("Enter size of the array: ");        // Input size of array
    scanf("%d", &size);
    printf("Enter elements in array: ");        // Input array elements
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order: ");       // Print array in reversed order
    for(i = size-1; i>=0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o areverse areverse.c
~/Array/ $ ./areverse
Enter size of the array: 8
Enter elements in array: 10
40
80
120
150
35
250
400
Array in reverse order: 400 250 35 150 120 80 40 10*/
