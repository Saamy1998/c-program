/*Algorithm
Step 1: START.
Step 2: Initialize two integer as N, i and one array as arr[100].
Step 3: Declare the size of array in N from user.
Step 4: Declare the array element from the user using FOR loop.
Step 5: Print the array's negative element using the FOR loop and IF condition(array index is less then zero.
Step 7: STOP.*/

#include <stdio.h>

int main()
{
    int arr[100]; 
    int i, N;
    printf("Enter size of the array : ");                // Input size of the array 
    scanf("%d", &N);
    printf("Enter elements in array : ");                // Input elements in the array
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAll negative elements in array are : ");
    for(i=0; i<N; i++)
    {
        if(arr[i] < 0)                                  // If current array element is negative
        {
            printf("%d, ", arr[i]);
        }
    }

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o negative negative.c
~/Array/ $ ./negative
Enter size of the array : 7
Enter elements in array : 84
-39
-67
-27
73
-58
-3

All negative elements in array are : -39, -67, -27, -58, -3*/
