/*Algorithm
Step 1: START.
Step 2: Declare four integer variables as size, i, j, k and integer array as arr[100].
Step 3: Get the number of elements in the array.
Step 4: Get the elements using FOR loop.
Step 5: Check nested FOR loop for iterating the element in array.
Step 6: Check IF the current element is in the array, it is true then Delete the current duplicate element.
Step 7: Print array after deleting duplicate elements.
Step 8: STOP.*/

#include <stdio.h>

int main()
{
    int arr[100];                                               // Declares an array of size 100
    int size;                                                   // Total number of elements in array
    int i, j, k;                                                // Loop control variables
    printf("Enter size of the array : ");                         //Input size of the array
    scanf("%d", &size);
    printf("Enter elements in array : ");                         // Input elements in the array 
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)                                         // Find duplicate elements in array
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])                                  // If any duplicate found
            {
                for(k=j; k < size - 1; k++)                       // Delete the current duplicate element
                {
                    arr[k] = arr[k + 1];
                }
                size--;                                           // Decrement size after removing duplicate element 
                j--;                                              // If shifting of elements occur then don't increment j
            }
        }
    }
    printf("Array elements after deleting duplicates : ");     // Print array after deleting duplicate elements
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o remove remove.c
~/Array/ $ ./remove
Enter size of the array : 10
Enter elements in array : 1
2
55
55
1
76
43
2
86
38
Array elements after deleting duplicates : 1 2 55 76 43 86 38*/
