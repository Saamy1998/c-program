/*Algorithm
Step 1: START.
Step 2: Declare four integer variables and integer array as arr[100].
Step 3: Get the number of elements in the array.
Step 4: Get the elements using FOR loop.
Step 5: Get the element for search from user.
Step 5: Check FOR loop for iterating the array and searching the element given by user.
Step 6: If element is found in array then raise found flag and terminate from loop.
Step 7: Print the position of the search element if flag is equals to 1 else print the not found
Step 8: STOP.*/

#include <stdio.h>

int main()
{
    int arr[100];
    int size, i, toSearch, found;
    printf("Enter size of array: ");                    // Input size of array 
    scanf("%d", &size);
    printf("Enter elements in array: ");                // Input elements of array 
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &toSearch);
    found = 0;

    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)                          // If element is found in array then raise found flag and terminate from loop.
        {
            found = 1;
            break;
        }
    }
    if(found == 1)                                       // If element is not found in array
    {
        printf("%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("%d is not found in the array", toSearch);
    }

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o search search.c
.~/Array/ $ ./search
Enter size of array: 6
Enter elements in array: 2
8
6
5
4
9
Enter element to search: 5
5 is found at position 4*/
