/*Algorithm
Step 1: START.
Step 2: Declare four integer variables as size, i, j, count and integer array as arr[100].
Step 3: Get the number of elements in the array.
Step 4: Get the elements using FOR loop.
Step 5: Check nested FOR loop fir iterating the element in array.
Step 6: Check IF the current element is in the array, it is true the increment count and break.
Step 7: Print total number of duplicate elements found in array
Step 8: STOP.*/

#include <stdio.h>

int main()
{
    int arr[100];
    int i, j, size, count = 0;
    printf("Enter size of the array : ");                        // Input size of array
    scanf("%d", &size);
    printf("Enter elements in array : ");                        // Input elements in array
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)                                        // Find all duplicate elements in array
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])                                 // If duplicate found then increment count by 1
            {
                count++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements found in array = %d", count);

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o duplicate duplicate.c
~/Array/ $ ./duplicate
Enter size of the array : 10
Enter elements in array : 1
10
25
1
25
30
15
25
12
15
Total number of duplicate elements found in array = 4*/
