/*Algorithm
Step 1: START.
Step 2: Initialize three integer as N, i, sumofarray and one array as arr[100].
Step 3: Declare the size of array in N from user.
Step 4: Declare the array element from the user usinf FOR loop.
Step 5: Assign function sum(int arr[], int start, int len) to sumofarray
Step 6: Print the sum of array element.
Step 7: STOP.

Algorithm printArray(int arr[], int start, int len)
Step 1: START.
Step 2: IF start is greater or equal then len then return 0.
Step 3: Return (arr[start] + sum(arr, start + 1, len))
Step 4: STOP*/

#include <stdio.h>

int sum(int arr[], int start, int len);                     //  Function declaration to find sum of array

int main()
{
    int arr[100];
    int N, i, sumofarray;
    printf("Enter size of the array: ");                   // Input size and elements in array
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    sumofarray = sum(arr, 0, N);
    printf("Sum of array elements: %d", sumofarray);
    return 0;
}

int sum(int arr[], int start, int len)                    // Recursively find the sum of elements in an array.
{
    if(start >= len)                                      // Recursion base condition
        return 0;

    return (arr[start] + sum(arr, start + 1, len));
}

/*OUTPUT

~/Function/ $ gcc -o arraysum arraysum.c
~/Function/ $ ./arraysum
Enter size of the array: 5
Enter elements in the array: 23
2
34
76
54
Sum of array elements: 189~/Function/ $ ./arraysum
Enter size of the array: 3
Enter elements in the array: 8
6
4
Sum of array elements: 18*/
