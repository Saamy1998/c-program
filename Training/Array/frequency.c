/*Algorithm
Step 1: START.
Step 2: Declare four integer variables as size, i, j, count and two integer array as arr[100], freq[100].
Step 3: Get the number of elements in the array.
Step 4: Get the elements and assign array frequecy with mines one.
Step 5: Check FOR loop fir iterating the element in array.
Step 6: Check IF the duplicate element is found, then increment count and assigne it to corresponding frquecy array element.
Step 7: Print frequency array element using FOR loop
Step 8: STOP.*/

#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
    printf("Enter size of array: ");                            // Input size of array
    scanf("%d", &size);
    printf("Enter elements in array: ");                        // Input elements in array
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;                                           // Initially initialize frequencies to -1 
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])                                // If duplicate element is found
            { 
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)                                      // If frequency of current element is not counted
        {
            freq[i] = count;
        }
    }

    printf("Frequency of all elements of array : \n");      // Print frequency of each element
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o frequency frequency.c
~/Array/ $ ./frequency
Enter size of array: 10
Enter elements in array: 2
5
3
6
2
6
5
8
4
2
Frequency of all elements of array : 
2 occurs 3 times
5 occurs 2 times
3 occurs 1 times
6 occurs 2 times
8 occurs 1 times
4 occurs 1 times*/
