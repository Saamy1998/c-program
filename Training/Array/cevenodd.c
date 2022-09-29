/*Algorithm
Step 1: START.
Step 2: Initialize four integer as size, i, even, odd and one array as arr[100].
Step 3: Declare the size of array from user.
Step 4: Declare the array element from the user using FOR loop.
Step 5: Assign zero to odd and even.
Step 6: Check FOr condition, for iterating the array elements.
Step 7: Check IF the current element of array is even then increment even count.
Step 8: Else increment odd count
Step 9: Print the count of even and odd element in array.
Step 10: STOP.*/

#include <stdio.h>

int main()
{
    int arr[100];
    int i, size, even, odd;
    printf("Enter size of the array: ");                // Input size of the array
    scanf("%d", &size);
    printf("Enter %d elements in array: ", size);       // Input array elements
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    even = 0;
    odd  = 0;
    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)                               // If the current element of array is even then increment even count
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o cevenodd cevenodd.c
~/Array/ $ ./cevenodd
Enter size of the array: 4
Enter 4 elements in array: 4
9
5
3
Total even elements: 1
Total odd elements: 3~/Array/ $ ./cevenodd
Enter size of the array: 7
Enter 7 elements in array: 45
83
62
76
93
48
55
Total even elements: 3
Total odd elements: 4*/
