/*Algorithm
Step 1: START.
Step 2: Initialize two integer as N, i and one array as arr[100].
Step 3: Declare the size of array in N from user.
Step 4: Declare the array element from the user usinf FOR loop.
Step 5: Print the array element using the function printArray(int arr[], int start, int len).
Step 7: STOP.

Algorithm printArray(int arr[], int start, int len)
Step 1: START.
Step 2: IF start is greater or equal then len then return.
Step 3: Print the array element.
Step 4: Use printArray function for printing next element in array.
Step 5: STOP.*/

#include <stdio.h>

void printArray(int arr[], int start, int len);                   // Function declaration

int main()
{
    int arr[100];
    int N, i;
    printf("Enter size of the array: ");                         // Input size and elements in array
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array: ");                           // Prints array recursively 
    printArray(arr, 0, N);

    return 0;
}

void printArray(int arr[], int start, int len)                  // Prints an array recursively within a given range.
{
    if(start >= len)                                            // Recursion base condition
        return;
    printf("%d, ", arr[start]);                                 // Prints the current array element 
    printArray(arr, start + 1, len);                            // Recursively call printArray to print next element in the array
}

/*OUTPUT

~/Function/ $ gcc -o element element.c
~/Function/ $ ./element
Enter size of the array: 6
Enter elements in the array: 3
5
8
6
9
3
Elements in the array: 3, 5, 8, 6, 9, 3, ~/Function/ $ ./element
Enter size of the array: 3
Enter elements in the array: 9
6
3
Elements in the array: 9, 6, 3*/
