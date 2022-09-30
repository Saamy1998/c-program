/*Algorithm
Step 1: START.
Step 2: Declare five integer variables as size1, size2,mergeSize, i, j, count and three integer array as arr1[100], arr2[100], merge[200].
Step 3: Get the number of elements in the array1.
Step 4: Get the number of elements in the array2.
Step 5: Get the elements of array 1 using FOR loop.
Step 6: Get the elements of array 2 using FOR loop.
Step 7: Assign size of array1 pluse array2 to mergeSize.
Step 8: Check FOR loop for iterating the element in array1.
Step 9: Copy each element in array1 to merge array.
Step 10: Check FOR loop for iterating the element in array2.
Step 11: Copy each element in array2 to merge array.
Step 12: Print total number of duplicate elements found in array
Step 13: STOP.*/


#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merge[200];
    int size1, size2, mergeSize;
    int i,j;
    printf("Enter the size of first array : ");            // Input size of first array
    scanf("%d", &size1);
    printf("Enter elements in first array : ");            // Input elements in first array
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of second array : ");         // Input size of second array 
    scanf("%d", &size2);
    printf("Enter elements in second array : ");           // Input elements in second array
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    mergeSize = size1 + size2;                            // Copy array1 to merge  
    for (i=0;i<size1;i++)
    {
        merge[i] = arr1[i];

    }
    for (i=size1,j=0;i<mergeSize,j<size2;i++,j++)         // Copy array2 to merger
    {
        merge[i] = arr2[j];
    }
    printf("Array merged in ascending order : ");          // Print merged array
    for(i=0; i<mergeSize; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o merge merge.c
~/Array/ $ ./merge
Enter the size of first array : 5
Enter elements in first array : 1
2
3
4
5
Enter the size of second array : 5
Enter elements in second array : 6
7
8
9
0
Array merged in ascending order : 1 2 3 4 5 6 7 8 9 0*/
